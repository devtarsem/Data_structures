#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4};

    for(int i = 0; i<nums1.size(); i++){
        int target = nums1[i];
        int low = 0;
        int high = nums2.size();
        int mid = (low + high) / 2;

        while(low<=high){
            int mid = (low + high) / 2;
            if(nums2[mid] == target){
                return nums2[mid];
            }else if(nums2[mid] > target){
                high = mid - 1;

            }else if(nums2[mid] < target){
                low = mid + 1;
            }
        }
    }
    
    return -1;
}