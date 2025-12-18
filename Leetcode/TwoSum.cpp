#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> twoSums(vector<int>&, int);

int main(){
    vector<int> nums {};
    vector <int> indexes {};
    int target {}, length {}, temp {};
    cout << "Enter Size of the list: ";
    cin >> length;
    cout << "\nEnter the list of numbers: ";
    for(int i {}; i< length; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "\nEnter the Target number: ";
    cin >> target;

    indexes = twoSums(nums, target);
    if (indexes.size() == 2)
        cout << "\nOutput: [" << indexes[0] << " , " << indexes[1] << ']';

    return 0;

}


vector<int> twoSums(vector<int>& nums, int target){
    int compliment {};
    unordered_map<int, int> indexOf {};
    for (int i {}; i < nums.size(); i++){
        compliment = target - nums[i];
        if (indexOf.find(compliment) != indexOf.end())
            return { indexOf[compliment], i};
        indexOf[nums[i]] = i;
    }
    return {};
}