#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {4,1,2,3,5,9};

    
    for(int i = 1; i<=nums.size()/2; i++){
        if(i%2 != 0){
            if(nums[i-1] > nums[i+1]){
                swap(nums[i-1], nums[i+1]);
            }
        }else{
            if(nums[i-1] < nums[i+1]){
                swap(nums[i-1], nums[i+1]);
            }
        }
    }

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }

}