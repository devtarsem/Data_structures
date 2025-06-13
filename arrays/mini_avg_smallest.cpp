#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {7,8,3,4,15,13,4,1};
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size()-1;
    vector<double> avgArr;

    while(j-i>0){
        double avg = (nums[i] + nums[j])/2;
        avgArr.push_back(avg);
    }
    return avgArr[avgArr.size()-1];
}