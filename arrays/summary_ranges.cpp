#include<iostream>
#include<vector>
using namespace std;
#include <cstdlib> // abs() function

int main(){
    vector<int> nums = {0,2,3,4,6,8,9};
    vector<vector<int>> numsFinal;
    vector<int> range;
    vector<string> str;
    for(int i = 0; i<nums.size(); i++){
        if(abs(nums[i+1] - nums[i]) == 1){
            if(range.size()==0){

                range.push_back(nums[i]);
            }
        }else{
            range.push_back(nums[i]);
            numsFinal.push_back(range);
            range.clear();
        }
    }

    for(int i = 0; i<numsFinal.size(); i++){
        string sip = numsFinal[i][0] + "->" + numsFinal[i][numsFinal[i].back()];
        str.push_back(sip);
     
    }

    for(int i = 0; i<str.size(); i++){
        cout<<str[i]<<endl;
    }

}