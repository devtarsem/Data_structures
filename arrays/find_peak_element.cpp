#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> nums = {1, 2, 3, 1};
    int start = 0;
    int end = nums.size()-1; // 6

    for(int i = start; i<=end; i++){
        if(i==0 && nums[i] > nums[i+1]){
            cout<<i<<endl;
            return 0;
        }

        if(i==end && nums[i]>nums[i-1]){
            cout<<i<<endl;
            return 0;
        }

        if(nums[i] > nums[i-1] && nums[i] > nums[i+1] ){
            cout<<nums[i]<<endl;
            cout<<i<<endl;
            return 0;
        }
    }

}