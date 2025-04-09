#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {100}; 
    int last ;
    int fun_sum = 0;
    int final = 0;
    for(int i = 0; i<nums.size(); i++){
        last = nums[nums.size()-1];
        for(int j = nums.size()-1; j>-1; j--){
            nums[j] = nums[j-1];
        }

        for(int h = 0; h<nums.size(); h++){
            fun_sum = fun_sum + h * nums[h];
        }
        if(fun_sum>final){
            final = fun_sum;
        }
        fun_sum = 0;
        nums[0] = last;
    }

    cout<<final;

}