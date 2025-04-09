#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    vector<int> pre ;
    vector<vector<int>> subset;
    int iterator = 0;

    while(iterator != nums.size()-1){
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                if(i == j){
                    continue;
                }
                for(int k = 0; k<iterator; k++){
                    
                }
                pre.push_back(nums[i]);
                pre.push_back(nums[j]);
                subset.push_back(pre);
                pre.clear();
            }        
            
        }
        iterator++;
    }

    for(int i = 0; i<subset.size(); i++){
        for(int j = 0; j<subset[i].size(); j++){
            cout<<subset[i][j];
        }
        cout<<" "<<endl;
    }

}