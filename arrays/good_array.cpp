#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {3, 4, 4, 1, 2, 1}; 
    sort(nums.begin(),nums.end());

    int diff = 1;

    for(int i= 0; i<nums.size()-1; i++){
        if(nums[i] != nums[i+1]){
            diff++;
        }
    }

    // building base n
    vector<int> baseN;
    for(int i = 1; i<=diff; i++){
        if(i==diff){
            baseN.push_back(i);
        }
        baseN.push_back(i);
    }
    
    for(int i = 0; i<baseN.size(); i++){
        cout<<baseN[i]<<endl;
    }
    if(nums == baseN){
        cout<<"true";
        return 1;
    }
    cout<<"false";

    return 0;
}