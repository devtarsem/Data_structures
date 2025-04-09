#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> nums1 = {1,3,5,2,4};
    vector<int> nums2 = {6,5,4,3,2,1,7};
    vector<int> nums3;

    // if(nums1.size()==0){
    //     return nums3;
    // }

    for(int i = 0; i<nums1.size(); i++){
        for(int j = 0; j<nums2.size(); j++){
            if(nums1[i]==nums2[j]){
                int s = 0;
                for(int p = j+1; p<nums2.size(); p++){
                    if(nums2[p] > nums1[i]){
                        nums3.push_back(nums2[p]);
                        s++;
                        break;
                    }
                }
                if(!s){
                    nums3.push_back(-1);
                    s = 0;
                }
            }
        }
    }

    for(int i = 0; i<nums3.size(); i++){
        cout<<nums3[i]<<endl;
    }

}