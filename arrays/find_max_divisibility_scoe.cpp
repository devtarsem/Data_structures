#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {20,14,21,10};
    vector<int> divisors = {10,16,20};

    int count = 0;
    int mini = 0;
    int final = 0; // 3
    int finalMin = INT32_MAX; // 5 -> 3

    for(int i = 0; i<divisors.size(); i++){
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] % divisors[i] == 0){
                count++;
            }
        }
        mini = divisors[i];
        if(count>final){
            final = count;
            finalMin = mini;
        }else if(count == final){
            if(mini < finalMin){
                finalMin = mini;
            }
        }
        count = 0;
    }
    cout<<finalMin;
}