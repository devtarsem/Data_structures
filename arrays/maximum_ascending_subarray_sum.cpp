#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {12,17,15,13,10,11,12};

    if(nums.size()==1){
        return nums[0];
    }
    int sum = 0;
    int pre = 0;
    int low = 0;

    while(low!=nums.size()){
        if(nums[low] < nums[low+1]){
            pre = pre + nums[low];
            low++;
        }else{
            pre = pre + nums[low];
            if(pre > sum){
                sum = pre;
            }
            low++;
            pre = 0;
        }
    }
    if(pre > sum){
        sum = pre;
    }

    cout<<sum;

}