#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {50,-75};
    sort(nums.begin(), nums.end());
    vector<int> final;
    int k = 2;
    int iterator = 0;
    for(int i = nums.size() - 1 ; i>-1; i--){
        final.insert(final.begin() , nums[i]);
        if(final.size() == k){
            break;
        }
    }
    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}