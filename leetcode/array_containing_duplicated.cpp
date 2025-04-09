#include<iostream>
using namespace std;
#include <unordered_set>
#include<vector>

int main(){
    vector<int> nums = {1,2,3,1};
    unordered_set<int> uset;
    int count = 0;
    bool hasDuplicates = false;

    for(int i = 0; i<nums.size(); i++){
        if(uset.count(nums[i])){
            hasDuplicates = true;
        }
        uset.insert(nums[i]);
    }

    if(hasDuplicates){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;

    }

}