#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {1,2,3}; // 1 2 2 3 3 4 7 8 -->
    vector<int> final;
    std::sort(nums.begin(), nums.end());
    int start=0;
    while(start<nums.size()-1){
        if(nums[start] == nums[start+1]){
            final.push_back(nums[start]);
            start++;
            start++;
        }else{
            start++;
        }
    }

    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}