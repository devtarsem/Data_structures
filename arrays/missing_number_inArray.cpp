#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> nums = {};
    std::sort(nums.begin(), nums.end());

    if(nums[0]!=0){
        cout<<"0 is the missing element"<<endl;
        return 0;
    }else if(nums[nums.size()-1] != nums.size()){
        cout<<nums.size()<<" is the missing element"<<endl;
        return 0;

    }

    for(int i = 0; i<nums.size(); i++){
        if(nums[i+1] != nums[i] + 1){
            cout<<nums[i] + 1<<" is the missing element"<<endl;
            return 0;
        }
    }
}