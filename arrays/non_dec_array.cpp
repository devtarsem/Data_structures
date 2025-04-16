#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {4,2,1};
    int bend = 0;
    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]){
            bend++;
        }
    }

    if(bend==1){
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > nums[i+1] && i==0){
                nums[0] = nums[1] - 1;
            }else if(nums[i] > nums[i+1] && i!=0 && i!= nums.size()-1){
                nums[i+1] = nums[i+2] - 1;
            }else if(nums[i] > nums[i+1] && i== nums.size()-1){
                nums[nums.size()-1] = nums[nums.size()-2] + 1;
            }
        }
    }else{
        cout<<"more bends";
    }

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}