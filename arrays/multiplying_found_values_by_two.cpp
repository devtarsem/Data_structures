#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {2};
    int original = 1;
    sort(nums.begin(), nums.end());

    bool founded = true;
    int target = original;

    while(founded){
        int low = 0;
        int high = nums.size()-1;
        founded = false;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                founded = true;
                target = 2*target;
            }else if(nums[mid] > target){
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }
        }
    }

    cout<<target<<endl;
    
}