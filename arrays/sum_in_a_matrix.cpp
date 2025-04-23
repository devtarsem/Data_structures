#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<vector<int>> nums = {
        {{1}}
    };

    vector<int> sump;
    int sum = 0;
    int presum = 0;

    while(nums[0].size()!= 0){
        for(int i = 0; i<nums.size(); i++){
            int maxi = *max_element(nums[i].begin(),  nums[i].end());
            int index;
            for(int p = 0; p<nums[p].size(); p++){
                if(nums[i][p] == maxi){
                    index = p;
                }
            }
            nums[i].erase(nums[i].begin()+index);
            sump.push_back(maxi);
            int sumpMax = *max_element(sump.begin(),  sump.end());
            presum = sumpMax;
        }
        cout<<presum<<endl;
        sum += presum;
        sump.clear();
    }   

    cout<<sum;

}   