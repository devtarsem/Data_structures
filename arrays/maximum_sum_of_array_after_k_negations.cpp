#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {5,6,9,-3,3};
    std::sort(nums.begin(), nums.end());
    int k = 2;
    int stop = 0;

    for(int i = 1; i<=k; i++){
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]<0){
                nums[j] = -1*nums[j];
                std::sort(nums.begin(), nums.end());
                break;
            }else{
                int leftIteration = k - i + 1;
                if(leftIteration%2!=0){
                    nums[0] = -1*nums[0];
                    stop++;
                }else{
                    stop++;
                }
                break;           
            }
        }
        if(stop){
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];
    }

    cout<<sum;
}