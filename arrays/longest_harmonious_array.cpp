#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {1,2,3,3,1,-14,13,4}; // -14 1 1 2 3 3 4 13
    sort(nums.begin(), nums.end());
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    int mini;
    int len = 0;
    int finalLen = INT32_MIN;

    for(int j = 0; j<nums.size(); j++){
        mini = nums[j];
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i] - mini == 1){
                len = i-j+1;
                cout<<len<<endl;
                if(len>finalLen){
                    finalLen = len;
                }
            }
        }
        // if(nums.size()-j-1 < finalLen){
        //     break;
        // }        
    }

    cout<<finalLen;
}