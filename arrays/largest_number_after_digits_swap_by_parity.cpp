#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int num = 1234;
    
    vector<int> nums;
    while(num){
        int last_digit = num%10;
        nums.insert(nums.begin(), last_digit);
        num /= 10;
    }

    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i]%2==0 && nums[j]%2==0 && nums[i] < nums[j]){
                swap(nums[i], nums[j]);
            }else if(nums[i]%2!=0 && nums[j]%2!=0 && nums[i] < nums[j]){
                swap(nums[i], nums[j]);
            }
        }
    }

    int multiplier = pow(10,nums.size()-1);

    int final = 0;
    for(int i = 0; i<nums.size(); i++){
        final = final + nums[i]*multiplier;
        multiplier /= 10;
    }
    cout<<final<<endl;

}