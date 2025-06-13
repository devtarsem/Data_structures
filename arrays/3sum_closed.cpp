class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int close = nums[0] + nums[1] + nums[2];
        int left;
        for(int i = 0; i<nums.size()-2; i++){
            int right = nums.size()-1;  
            left = i+1;
            while(left<right){
                int newClose = nums[i] + nums[left] + nums[right];
                if(abs(newClose - target) < abs(close-target) ){
                    close = newClose;
                }

                if(newClose > target){
                    right--;
                }else {
                    left++;
                }
            }
        }
        return close;
    }
};