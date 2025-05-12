#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    vector<int> nums = {1,3,2,1,5,4};
    int k = 2;
    vector<int> final;

    for(int i = 0; i<nums.size(); i++){
        bool clear1 = false;
        if(i-k >= 0){
            if(nums[i] > nums[i-k]){
                cout<<"i-k: "<<nums[i]<<endl;
                clear1 = true;
            }
        }else{
            clear1 = true;
        }

        bool clear2 = false;
        if(i+k < nums.size()){
            if(nums[i] > nums[i+k]){
                cout<<"i+k: "<<nums[i]<<endl;

                clear2 = true;
            }
        }else{
            clear2 = true;
        }

        if(clear1 && clear2){
            final.push_back(nums[i]);
        }
    }

    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }

    int sum = accumulate(final.begin(), final.end(), 0);
    cout<<sum;

}