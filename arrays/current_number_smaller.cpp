#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {8,1,2,2,3}; // 1 2 2 3 8
    // sort(nums.begin(), nums.end());
    vector<int> final;
    for(int i = 0; i<nums.size(); i++){
        int count = 0;
        for(int j = 0 ; j<nums.size(); j++){
            if(i!=j && nums[i] > nums[j]){
                count++;
            }
        }
        final.push_back(count);
    }
    for(int i = 0;i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}