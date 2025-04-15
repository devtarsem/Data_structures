#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    int n = 7;
    vector<int> nums ;
    nums.push_back(0);
    nums.push_back(1);
    
    for(int i = 2; i<n+1; i++){
        if(i%2 == 0){
            nums.push_back(nums[i/2]);
        }else{
            nums.push_back(nums[i/2] + nums[(i/2) + 1]);

        }
    }

    std::sort(nums.begin(), nums.end());
    cout<<nums[nums.size()-1]<<endl;

} 