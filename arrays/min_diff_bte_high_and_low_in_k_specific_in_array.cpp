#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {9,4,1,7};
    int k = 2;
    int low = 0;
    int high = k - 1;
    int diff = INT32_MAX;

    while(low + k != nums.size()){
        int minVal = min(nums[low], nums[high]);
        int maxVal = max(nums[low], nums[high]);
        if(diff > maxVal - minVal){
            diff =  maxVal - minVal;
        }
        low++;
        high++;

        if(high == nums.size()){
            low
        }
    }
}