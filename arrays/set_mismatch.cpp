#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,4};
    int range = nums.size();
    std::sort(nums.begin(), nums.end());
    vector<int> mis;
    int faulty = 0;
    int faultIndex;

    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            faulty = nums[i];
        }
    }
    int replace = 0;
    if(faulty!=nums[nums.size()-1]){
        replace = faulty+1;
    }else{
        replace = faulty-1;

    }

    vector<int> final;
    final.push_back(faulty);
    final.push_back(replace);


}