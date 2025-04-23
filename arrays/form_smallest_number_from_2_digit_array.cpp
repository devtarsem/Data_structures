#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums1 = {3,5,2,6};
    vector<int> nums2 = {3,1,7};

    vector<int> concac;

    for(int i = 0; i<nums1.size() + nums2.size(); i++){
        if(i < nums1.size()){
            concac.push_back(nums1[i]);
        }else{
            concac.push_back(nums2[i-nums1.size()]);
        }
    }

    unordered_set<int> numSer(concac.begin(), concac.end());

    if(numSer.size() != nums1.size()+nums2.size()){
        sort(concac.begin(), concac.end());
        for(int i = 0; i<concac.size()-1; i++){
            if(concac[i] == concac[i+1]){
                cout<<"TYhe digit is"<<concac[i]<<endl;
                return concac[i];
            }
        }
    }else{
        int min1 = *min_element(nums1.begin(), nums1.end());
        int min2 = *min_element(nums2.begin(), nums2.end());
        if(min1>min2){
            cout<<"TYhe digit is"<<min2*10+min1<<endl;

            return min2*10+min1;
        }else{
            cout<<"TYhe digit is"<<min1*10+min2<<endl;

            return min1*10+min2; 
        }
    }

   

}