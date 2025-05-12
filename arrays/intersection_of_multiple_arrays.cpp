#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> nums = {
        {7,34,45,10,12,27,13}, 
        {27,21,45,10,12,13},
    };

    vector<int> conc;

    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums[i].size(); j++){
            conc.push_back(nums[i][j]);
        }
    }

    sort(conc.begin(), conc.end()); 


    int checker = nums.size();
    int iterator =1;
    int tracker;
    vector<int> intersection;

    for(int i = 0; i<conc.size()-1; i++){
        if(conc[i] == conc[i+1]){
            tracker = conc[i];
            iterator++;
        }else{
            if(iterator == checker){
                intersection.push_back(conc[i]);
            }
            iterator = 1;
        }

    }

    if(iterator != 1){
        intersection.push_back(tracker);
    }


    for(int i = 0; i<intersection.size(); i++){
        cout<<intersection[i]<<endl;
    }
  
}