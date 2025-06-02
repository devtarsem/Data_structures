#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> nums = {10};
    unordered_map<int, vector<int>> mp;
    for(int i  = 0; i<nums.size(); i++){
        int num = nums[i];
        int sum = 0;
        while(num){
            sum = num%10 + sum;
            num = num/10;
        }
        mp[sum].push_back(num);
    }

    for(auto& [digitSum,group] :mp){
        if(group.size()<2) continue;

        sort(group.begin,group.end(),greater<int>());
        maxi = max(maxi, group[0]+group[1]);
    }

    cout<<maxi;
}   