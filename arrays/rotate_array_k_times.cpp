#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    int temp ;
    for(int i = 0; i<k; i++){
        temp = nums[nums.size()-1];
        for(int j = nums.size()-1; j>0; j--){
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
    }

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}