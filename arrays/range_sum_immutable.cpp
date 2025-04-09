#include<iostream>
#include<vector>

using namespace std;

class NumArray{
    private:
        vector<int> nums;

    public:

    NumArray(vector<int>& nums){
        this->nums = nums;
    }

    int sumrange(int left, int right){
        int sum = 0;

        for(int i = left; i<right+1; i++){
            sum = sum + nums[i];
        }

        return sum;
    }
};

int main(){
    vector<int> nums = {-2,0,3,-5,2,-1};

    NumArray obj(nums);
    int sum = obj.sumrange(0,5);
    cout<<sum;
}