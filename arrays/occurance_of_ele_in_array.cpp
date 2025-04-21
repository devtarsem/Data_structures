#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,1,7};
    vector<int> queries = {1,3,2,4};
    int x =1;
    vector<int> Occ;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == x){
            Occ.push_back(i);
        }
    }

    

    vector<int> final;
    int iterator = 0;

    for(int i = 0; i<queries.size(); i++){
        if(queries[i] <= Occ.size()){
            final.push_back(Occ[queries[i]-1]);
            iterator++;
        }else{
            final.push_back(-1);

        }
    }

    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}