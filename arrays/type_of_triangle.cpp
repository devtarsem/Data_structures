#include<iostream>
#include<vector>
#include<string>

using namespace std;


string main(){
    vector<int> nums = {3,3,3};

    if(!((nums[0] + nums[1] > nums[2]) || (nums[1] + nums[2] > nums[0]) || (nums[2] + nums[0] > nums[1]))){
        return "none";
    }

    sort(nums.begin(), nums.end());

    if(nums[0] == nums[1] && nums[1] == nums[2]){
        return "equilateral";
    }else if(nums[0] < nums[1] && nums[1] < nums[2]){
        return "scalene";
    }else if(nums[0] == nums[1] && nums[1] < nums[2]){
        return "isosceles ";
    }
    return "none";
}