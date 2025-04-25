#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {11,7,2,15};
    sort(nums.begin(), nums.end());

    int count = 0;

    for(int i = 0; i<nums.size()-2; i++){
        if(nums[i] < nums[i+1] && nums[i+1] < nums[i+2]){
            count++;
        }
    }

    return count.
}