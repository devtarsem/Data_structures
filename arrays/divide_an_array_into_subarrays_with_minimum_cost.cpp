#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {10,3,1,1};
    vector<int> mini;
    for(int i = 1; i<nums.size(); i++){
        mini.push_back(nums[i]);
    }
   
    sort(mini.begin(), mini.end());

    cout<<nums[0] + mini[0] + mini[1];
}