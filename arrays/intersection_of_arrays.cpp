#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> nums1 = {9,4,9,8,4};
    vector<int> nums2 = {9,4};
    // vector<int> intersection;
    unordered_set<int> intersection;
    std::unordered_map<int, int> freq;
    for (int num : nums1.size()>nums2.size() ?nums2 : nums1) {
        freq[num]++;  // increment frequency
    }



    unordered_set<int> num(nums1.begin(), nums1.end());
    for(int i = 0; i<nums2.size(); i++){
        if(num.count(nums2[i])){
            intersection.insert(nums2[i]);
        }
    }
    

    vector<int> interVec(intersection.begin(), intersection.end());

    for(int i = 0; i<interVec.size(); i++){
        cout<<interVec[i]<<endl;
    }
    
}