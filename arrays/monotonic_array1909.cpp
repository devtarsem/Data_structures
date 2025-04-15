#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {1,1,1};
    int iterator = 0; // 1 2 1 2 3
    for(int i = 0; i<nums.size(); i++){
        if(nums[iterator] < nums[iterator+1]){
            iterator++;
        }else{
            nums.erase(nums.begin() + iterator);
            iterator--;
        }
    }

    bool sorted = std::is_sorted(nums.begin(), nums.end());
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }

    // cout<<iterator;
}