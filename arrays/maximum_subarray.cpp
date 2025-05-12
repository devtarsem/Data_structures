#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int low = 0;
    int high = 1;

    int sum = 0;
    int final = INT32_MIN;

    while(low!= nums.size()){
        for(int i = low; i<=high; i++){
            sum = sum + nums[i];
        } 

        if(final < sum){
            final = sum;
        }

        if(high == nums.size()){
            low++;
            high = low+1;
        }else{
            high++;
        }
        sum = 0;
    }

    cout<<final<<endl;
}