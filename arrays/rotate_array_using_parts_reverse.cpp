#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;
    std::reverse(nums.begin(), nums.end());

    std::reverse(nums.begin(), nums.begin()+k);
    std::reverse(nums.begin()+k, nums.end());

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}