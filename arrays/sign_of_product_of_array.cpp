#include<iostream>
#include<vector>
using namespace std;

int signFunc(int val){
    return x>0 ? 1: x<0 ? -1 : 0;
}

int main(){
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    int prod = 1;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 0){
            prod 0;
            break;
        }
        prod = prod * nums[i];
    }

    signFunc(prod);
}