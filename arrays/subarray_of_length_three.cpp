#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-1,-4,-1,4};
    int low = 0;
    int high = 2;
    int count = 0;

    while(high!= nums.size()){
        int sum = nums[low] + nums[high];
        cout<<sum<<endl;
        if(sum == ((double)nums[(low + high)/2])/2){
            count++;
        }
        low++;
        high++;
    }
    cout<<count;
}