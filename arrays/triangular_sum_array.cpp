#include<iostream>
#include<vector>
using namespace std;

vector<int> triSum(vector<int> nums){
    vector<int> nump;
    for(int i = 0; i<nums.size()-1; i++){
        nump.push_back((nums[i] + nums[i+1])%10);
        
    }
    return nump;
    // return 0;

}

int main(){
    vector<int> nums = {5};
    int sizep = nums.size();
    int last;
    for(int i = 1; i<sizep; i++){
        vector<int> pre = triSum(nums);
        nums = pre;
        last = pre[0];
    }
    cout<<last;
}