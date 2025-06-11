#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<string>
#include<map>

int main(){
    vector<int> nums = {4,4,2,4,3};
    int count = 0;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i + 1; j<nums.size(); j++){
            for(int k = j + 1; k<nums.size(); k++){
                if((nums[i] != nums[j]) && (nums[j] != nums[k]) && (nums[i] != nums[k]) ){
                    count++;
                }
            }
        }
    }
    cout<<count;
}