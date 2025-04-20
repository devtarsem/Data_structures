#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> sumArr;
    int left = 1;
    int right = 5;

    for(int i = 0; i<nums.size(); i++){
        int low = 0;
        int high = i;

        int sum = 0;
        while(high!=nums.size()){
            sum = sum + nums[high];
            high++;
            sumArr.push_back(sum);
        }
    }

    sort(sumArr.begin(), sumArr.end());
    int sum = 0;

    for(int i = left-1; i<=right-1; i++){
        sum+=sumArr[i];
    }
    cout<<sum;
}