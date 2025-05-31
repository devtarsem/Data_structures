#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    int n = 22;
    vector<int> nums;

    while(n){
        int last_digit = n%10;
        nums.push_back(last_digit);
        n = n/10;
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i<nums.size(); i++){
        // cout<<nums[i]<<endl;
    }
    cout<<nums[nums.size()-1]*nums[nums.size()-2];
    return nums[nums.size()-1]*nums[nums.size()-2];

}