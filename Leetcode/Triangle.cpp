#include <iostream>
#include <vector>

using namespace std;

int minimumTotal(vector<vector<int>>&);
vector<vector<int>> get_input_triangle();
void display_triangle(vector<vector<int>>&);

vector<vector<int>> get_input_triangle(){
    vector<vector<int>> triangle {};
    int numRows {};
    cout << "Enter no of Row: ";
    cin >> numRows;
    for (int i{}; i < numRows; i++){
        vector<int> row {};
        cout << "\nEnter elements of row no " << i+1 << " : ";
        for (int j {}; j < i+1; j++){
            int temp {};
            cin >> temp;
            row.push_back(temp);
        }
        triangle.push_back(row);
    }
    cout << "\nThe Triangle provided is : ";
    display_triangle(triangle);
    return triangle;
}

void display_triangle(vector<vector<int>>& triangle){
    cout << '[';
    for (int rowNum {}; rowNum < triangle.size(); rowNum++){
        cout << '[';
        for(int rowElem {}; rowElem < triangle[rowNum].size(); rowElem++){
            cout<<triangle[rowNum][rowElem];
            if (rowElem != triangle[rowNum].size()-1)
                cout << ", ";
        }
        cout << ']';
        if (rowNum != triangle.size()-1)
            cout << ", ";
    }
    cout << ']';
}

int minimumTotal(vector<vector<int>>& triangle){
    if (triangle.size() < 1)
        return {};
    vector<int> prev_mins {};
    prev_mins = triangle[0];
    for(int row{1}; row<triangle.size(); row++){
        vector<int> curr_mins {};
        for(int rowElem{0}; rowElem<triangle[row].size(); rowElem++){
            if (rowElem == 0)
                curr_mins.push_back(triangle[row][rowElem]+prev_mins[0]);
            else if (rowElem == row)
                curr_mins.push_back(triangle[row][rowElem]+prev_mins[row-1]);
            else
                curr_mins.push_back(triangle[row][rowElem]+((prev_mins[rowElem]<prev_mins[rowElem-1])?prev_mins[rowElem]:prev_mins[rowElem-1]));
        }
        prev_mins = curr_mins;
    }
    if (prev_mins.size() < 1)
        return {};
    int minTotal {prev_mins[0]};
    for (int i{1}; i < prev_mins.size(); i ++)
        minTotal = (minTotal<prev_mins[i]? minTotal: prev_mins[i]);
    return minTotal;
}

int main(){
    vector<vector<int>> triangle {};
    triangle = get_input_triangle();
    cout << "\nThe minimum path sum from top to bottom is: " << minimumTotal(triangle);
    return 0;
}