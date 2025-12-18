#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> generate(int);
void display_triangle(vector<vector<int>>&);

int main (){
    vector<vector<int>> triangle {};
    int numRows {};

    cout << "Enter the number of rows: ";
    cin >> numRows;
    if (numRows < 1)
        return 0;

    triangle = generate(numRows);

    display_triangle(triangle);
    return 0;
}

vector<vector<int>> generate(int numRows){
    if (numRows < 1)
        return {};
    vector<vector<int>> triangle {};
    vector<int> prev_row {};
    for(int rowNum {1}; rowNum <= numRows; rowNum++){
        vector<int> curr_row {1};
        if (rowNum == 1){
            triangle.push_back(curr_row);
            prev_row = curr_row;
            continue;
        }
        int length_copy = rowNum/2;
        int length_add = rowNum/2;
        if (rowNum%2 != 0)
            length_add += 1;
        for (int i {1}; i < length_add; i++)
            curr_row.push_back(prev_row[i]+prev_row[i-1]);
        
        for (int i {length_copy-1}; i >= 0; i-- )
            curr_row.push_back(curr_row[i]);
        triangle.push_back(curr_row);
        prev_row = curr_row;
    }

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
