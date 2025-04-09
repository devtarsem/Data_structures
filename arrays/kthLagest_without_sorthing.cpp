#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums    = {
        {3,2,3,1,2,4,5,5,6}
    };

    int k = 4;
    int kthmin = 0;
    int max = INT32_MIN;
    int ind;
    

    for(int i = 0; i<k; i++){
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] > max){
                max = nums[j];
                kthmin = nums[j];
                ind = j;
            }
        }
        nums[ind] = -999999;
        max = INT32_MIN;

    }

    cout<<kthmin<<endl;
}