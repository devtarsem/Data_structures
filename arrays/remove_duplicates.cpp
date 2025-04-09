#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    unordered_set<int> nums1(nums.begin(), nums.end());
    nums.clear();
    nums = {nums1.begin(), nums1.end()};
    std::reverse(nums.begin(), nums.end());

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}
