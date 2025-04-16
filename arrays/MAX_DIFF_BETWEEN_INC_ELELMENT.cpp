#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,5,2,10};

    int i, j;
    i = 0;
    j = 1;
    int min = INT32_MAX;
    int diff = -1;

    while(j!=nums.size()-1){
        if(nums[j] > nums[i]){
            if(min > nums[i]){
                min = nums[i];
                if(diff < nums[j] - min){
                    diff = nums[j] - min;
                }
                j++;
            }
        }
            i++;
            j++;
        
    }

    cout<<diff;

}