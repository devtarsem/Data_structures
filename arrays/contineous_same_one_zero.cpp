#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {0,1,1};
    int zero = 0;
    int one = 0;
    int length = 0;

    int iteration = 0;

    while(iteration!= nums.size()){
        for(int i = iteration; i<nums.size(); i++){
            if(nums[i] == 0){
                zero++;
            }else{
                one++;
            }
            int sum = 0;
            if(one == zero){
                sum = zero+one;
                length = sum;
            }
        }
        if(nums.size()-iteration <= length){
            break;
        }
        one = zero = 0;
        iteration++;
    }

    cout<<length;

}