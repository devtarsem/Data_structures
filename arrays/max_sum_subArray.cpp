#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,-1,-2,1,0,-1};
    sort(nums.begin(), nums.end());
    vector<int> subarr = {};

    
    for(int i = nums.size()-1; i>-1; i--){
        if(nums[i] < 0){
            break;
        }
        auto it = find(subarr.begin(), subarr.end(), nums[i]);
        if(!(it!=subarr.end()) && nums[i] > 0 ){
            subarr.push_back(nums[i]);
        }   
    }

    int sum = 0;
    for(int i = 0; i<subarr.size(); i++){
        sum += subarr[i];
    }
    cout<<sum<<endl;
}