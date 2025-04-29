#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {8,8,8,8,2,4,4,2,4};
    sort(nums.begin(), nums.end());

    int maxCount = 0;
    int pre = 1;
    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            pre++;
        }else{
            if(maxCount<pre){
                maxCount = pre;
                
            }
            cout<<pre<<endl;
            pre = 1;
        }
    }
    if(maxCount<pre){
        maxCount = pre;
        
    }

    cout<<maxCount<<endl;
    int diff = 1;
    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i] != nums[i+1]){
            diff++;
        }
    }

    cout<<diff<<endl;

    vector<vector<int>> final(maxCount, vector<int>(diff));

    int interation = 0;
    int cols = 0;

    while(interation!=nums.size()){
        for(int i = 0; i<maxCount; i++){
            if(interation+1 < nums.size() && nums[interation] == nums[interation+1]){
                final[i][cols] = nums[interation];
                interation++;
            }else{
                final[i][cols] = nums[interation];
                cols++;
                interation++;

                break;
            }
        }
    }

    for(int i = 0; i<final.size(); i++){
        for(int j = 0; j<final[i].size(); j++){
            if(final[i][j] == 0){
                final[i].erase(final[i].begin() + j);
                j--;
            }
        }
        cout<<" "<<endl;
    }

    for(int i = 0; i<final.size(); i++){
        for(int j = 0; j<final[i].size(); j++){
           cout<<final[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    
}