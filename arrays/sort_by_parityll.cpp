#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2,3};
    vector<int> odd;
    vector<int> even;
    for(int i =0; i<nums.size(); i++){
        if(nums[i]%2==0) even.push_back(nums[i]); else odd.push_back(nums[i]);
    }
    vector<int> nump;
    int oddit = 0;
    int evenit = 0;

    
    for(int i = 0; i<nums.size(); i++){
        if(i%2==0){ 
            nump.push_back(even[evenit]);
            evenit++;
        }else{
            nump.push_back(odd[oddit]);
            oddit++;
        } 
    }

    for(int i =0; i<nump.size(); i++){
        cout<<nump[i]<<endl;
    }
}