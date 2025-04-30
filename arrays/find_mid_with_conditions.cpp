#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2,3,-1,8,4};
    int points = 0;

    while(points!= nums.size()){
        
        // left sum
        int left = 0;
        if(points!=0){
            for(int i = 0; i<points; i++){
                left += nums[i];
            }
        }

        // right sum
        int right = 0;
        if(points!= nums.size()-1){
            for(int j = points+1; j<nums.size(); j++){
                right += nums[j];
            }
        }

        if(left == right){
            return points;
        }
        points++;
    }

    return -1;

}