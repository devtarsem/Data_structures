#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>

int main(){
    vector<int> nums  = {4,3,2,7,8,2,3,1};
    unordered_set<int> numsSet(nums.begin(), nums.end());
    vector<int> elementsDiss;

    for(int i = 0; i<=nums.size()-1; i++){
        if(!numsSet.count(i+1)){
            elementsDiss.push_back(i+1);
        }
    }

   
    
}