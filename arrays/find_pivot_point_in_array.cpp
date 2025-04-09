#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,7,3,6,5,6};
    int low,high, lsum, rsum,mid;
    low = 0;
    high = nums.size()-1;
    lsum = rsum = 0;
    for(int i = 0; i<nums.size(); i++){
        mid = i;
        if(i!=0){
            for(int p = low; p<mid; p++){
                lsum = lsum + nums[p];
            }
        }else{
            lsum = 0;
        }

        if(i!=nums.size()){
            for(int y = mid+1; y<=high; y++){
                rsum = rsum + nums[y];
            }
        }else{
            rsum = 0;
        }

        if(lsum == rsum){
            cout<<i<<endl;
            break;
        }else{
            lsum = 0;
            rsum = 0;
        }
    }


}