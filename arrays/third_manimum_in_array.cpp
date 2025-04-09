#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {3,2,1};
    std::sort(nums.begin(), nums.end());
    unordered_set<int> unsert(nums.begin(), nums.end());
    vector<int> pro(unsert.begin(), unsert.end());
    int lastthird = nums.size() - 3;
    if(nums[lastthird]){
        cout<<nums[lastthird]<<endl;
        return nums[lastthird];
    }else{
        cout<<nums[nums.size()-1];

        return nums[nums.size()-1];
    }
}