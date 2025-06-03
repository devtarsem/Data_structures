#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2,1};
    int iterations = nums.size()/2;

    for(int i = 0; i<iterations; i++){
        for(int j = 0; j<nums.size(); j++){
            if(j%2 == 0){
                // even
                if(j+2 < nums.size() && nums[j] > nums[j+2]){
                    swap(nums[j], nums[j+2]);
                }
            }else{
                // odd
                if(j+2 < nums.size() && nums[j] < nums[j+2]){
                    swap(nums[j], nums[j+2]);
                }
            }
        }
    }

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}