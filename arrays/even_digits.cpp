#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {555,901,482,1771};
    int pair;
    int even = 0;
    for(int i = 0; i<nums.size(); i++){
        int element = nums[i];
        while(element){
            int digit = element%10;
            pair++;
            element /= 10;
        }
        if(pair%2 == 0){
            even++;
        }
        pair = 0;
    }

    cout<<even;
}