#include<iostream>
#include <unordered_set>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,2,2,5};
    unordered_set<int> uniqueSet(nums.begin(), nums.end());
    int max = 0;

    for(int i = 0; i<nums.size(); i++){
        int couttarget = count(nums.begin(), nums.end(), nums[i]);
        if(couttarget>max && nums.size()/2 < couttarget){
            max = nums[i];
        }
    }


}