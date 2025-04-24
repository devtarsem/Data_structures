#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,1,1,1,1,1,1,1};
    int target = 1;
    int start = 0;
    int bast = INT32_MAX;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == target){
            if(bast> abs(i-start)){
                bast = abs(i-start);
            }
        }
    }

    cout<<bast;
}