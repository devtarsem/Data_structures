#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    sort(nums.begin(), nums.end(), greater<int>());

    double avg = 0;
    double sum = 0;
    for(int i = 0; i<k; i++){
        sum = sum + nums[i];
    }

    cout<<sum;



    // int low = 0;
    // int high = k-1;

    // double avgSum = INT32_MIN;

    // while(high!=nums.size()){
    //     double sum = 0;
    //     for(int i = low ; i<=high; i++){
    //         sum += nums[i];
    //     }
    //     sum = sum / k;
        
    //     if(sum > avgSum){
    //         avgSum = sum;
    //     }
    //     low++;
    //     high++;
    // }

    // cout<<avgSum;

}