#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {-5,-2,4,4,-2};
    int x = 1-nums[0];
    int pre = x > 0 ? x : 1;
    if(x<=0){
        x = 1;
    }
    cout<<pre<<endl;



    for(int i = 0; i<nums.size(); i++){ // 4
        if(nums[i] > 0){
            x = x + nums[i];
        }else if(nums[i] < 0){
            x = x + nums[i];
            cout<<x<<endl;

            int iterator = x;
            if(x<=0){
                for(int p = 0; p>=iterator; p--){
                    x=x+1;
                    pre++;
                    cout<<"runned"<<p+1<<endl;
                }
                // cout<<pre<<endl;
            }
        }
    }

    if(x<=0){

        for(int i = 0; i>=x; i--){
            pre++;
        }
    }

    cout<<pre;


}