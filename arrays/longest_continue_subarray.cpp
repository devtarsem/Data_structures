#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>

int main(){
    vector<int> nums = {1,3,5,4,2,3,4,5};
    int count = 1;
    int maxcount = 1;
    unordered_set<int> nump(nums.begin(), nums.end());
    if(nump.size() == 1){
        return 1;
    }

    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i] < nums[i+1]){
            count++;
        }else{
            if(count>maxcount){
                maxcount = count;
            }
            count = 1;
            continue;
        }
    }
    if(count>maxcount){
        maxcount = count;
    }
    count = 1;
    cout<<maxcount;

}