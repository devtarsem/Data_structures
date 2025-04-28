#include<iostream>
#include<vector>
using namespace std;
#include<math.h>

int main(){
    vector<int> nums  = {3,-2,1,1};
    vector<int> result;

    int n = nums.size(); // [i]%n --> 0%4, 1%4, 2%4, 3%4, 4%4, 5%4

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] > 0){
            int move = (i+nums[i])%n;
            result.push_back(nums[move]);
        }else if(nums[i] < 0){
            int move = (i+n-abs(nums[i]))%n;
            result.push_back(nums[move]);
        }else{
            result.push_back(nums[i]);

        }
    }

    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<endl;
    }

}