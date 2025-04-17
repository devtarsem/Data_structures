#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,5};

    int low = 0;
    int high = 1;

    int diff = 0;
    vector<int> nums2;

    while(low!=nums.size()-1){
        // int minval = min(nums[low], nums[high]);
        // int maxval = max(nums[low], nums[high]);
        diff = diff + abs(nums[low] - nums[high]);
        if(high==nums.size()){
            low++;
            high = low + 1;
            cout<<low << " : "<< high <<endl;
            nums2.push_back(diff);
            diff = 0;
        }else{
            high++;
        }
    }

    for(int i = 0; i<nums2.size(); i++){
        cout<<nums2[i]<<endl;
    }
}