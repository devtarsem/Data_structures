#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<map>

int main(){
    vector<int> nums = {3,4,3,3};
    int k = 2;
    sort(nums.begin(), nums.end(), greater<int>());

    int sum = 0;
    for(int i = 0; i<k; i++){
        sum += nums[i];
    }
    cout<<sum;

}