#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    vector<int> nums = {100,1,10};
    int absmin= INT32_MAX;
    int low = 1;

    while(low != nums.size()){
        int max1 = *max_element(nums.begin(), nums.begin()+low);
        int min2 = *min_element(nums.begin()+low, nums.end());

        if(abs(max1 - min2) < absmin){
            absmin = abs(max1 - min2);
        }

        int min1 = *min_element(nums.begin(), nums.begin()+low);
        int max2 = *max_element(nums.begin()+low, nums.end());

        if(abs(max2 - min1) < absmin){
            absmin = abs(max2 - min1);
        }
        low++;
    }
    cout<<absmin;

}