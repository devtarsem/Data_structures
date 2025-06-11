#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {0}; // 0 1 3 5 5 | 0 0 2 4 4 | 0 0 0 2 2 | 0 0 0 0 0 
    sort(nums.begin(), nums.end());
    int operation = 0;

    for(int i = 0; i<nums.size(); i++){
        bool check = false;
        int subs = nums[i];
        if(nums[i] == 0) continue;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] == 0) continue;
            nums[j] = nums[j] - subs;
            check =true;
        }
        if(check){
            for(int p = 0;p<nums.size(); p++){
                cout<<nums[p]<<" ";
            }
            cout<<" "<<endl;
            operation++;
        }
    }

    cout<<operation;
}