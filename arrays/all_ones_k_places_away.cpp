#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {0,1,0,0,1,0,0,1};
    int count = 0;
    int k = 2;
    int start = 0;

    if(nums.size()==1 && k==0){
        return true;
    }else if(nums.size()==1){
        return false;
    }

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 1){
            if(count < k && start!=0){
                cout<<i<<endl;
                cout<<"This array is falsy";
                return false;
                break;
            }else{
                count = 0;
                
            }
        }else{
            count++;
        }
    }
}