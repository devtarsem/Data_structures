#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3};
    int bend = 0;
    int bendIndex;
    // rotation
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] > nums[i+1]){
            bend++;
            bendIndex = i;
            break;
        }
    }

    if(!bend){
        return true;
    }


    vector<int> recovrArr;

    for(int i = bendIndex+1; i<nums.size(); i++){
        recovrArr.push_back(nums[i]);
    }

    for(int i = 0; i<bendIndex+1; i++){
        recovrArr.push_back(nums[i]);
    }

    for(int i = 0; i<recovrArr.size()-1; i++){
        if(recovrArr[i] > recovrArr[i+1]){
            cout<<"falsy array";
        }
    }

}