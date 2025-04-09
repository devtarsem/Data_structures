#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    int m = 3;
    int n = 3;
    vector<int> mergedArr;
    for(int i = 0; i <m+n; i++){
        if(i<m){
            mergedArr.push_back(nums1[i]);
        }else{
            mergedArr.push_back(nums2[i-m]);

        }
    }

    std::sort(mergedArr.begin(), mergedArr.end());
    for(int i= 0; i<m+n; i++){
        cout<<mergedArr[i]<<endl;
    }

}