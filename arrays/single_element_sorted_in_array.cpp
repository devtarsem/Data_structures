#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,3,4,4,8,8};
    int i = 0;
    while(i != nums.size()-1){
        if(nums[i] == nums[i+1]){
            i++;
            i++;
        }
        else{
            cout<<"non repeater is "<<nums[i]<<endl;
            return 0;
        }
    }
    cout<<"non repeater is "<<nums[nums.size()-1]<<endl;

    return nums[nums.size()-1];
}