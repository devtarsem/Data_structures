#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {1};
    sort(nums.begin(),nums.end());

    for(int i = 0; i<nums.size(); i++){
        int x = i+1;
        int count = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] >= x){
                count++;
            }
        }
        if(count == x){
            cout<<"founded : "<< x;
            break;
        }

    }

    cout<<"Notfoundd";
}