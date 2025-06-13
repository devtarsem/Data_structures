#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {4,4,7,6,7};
    sort(nums.begin(), nums.end());

    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];
    }

    int subse = 0;
    vector<int> subseSum;
    for(int i = nums.size()-1; i>-1; i--){
        subse += nums[i];
        subseSum.push_back(nums[i]);
        if(sum - subse < subse) break;
    }

    for(int j = 0; j<subseSum.size(); j++){
        cout<<subseSum[j]<<endl;
    }

}