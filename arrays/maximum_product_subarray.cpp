class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            // 186/190 test case passed now time exceeds
            if(nums.size()==1){
                return nums[0];
            }
    
            int low, high;
            int multi = 1;
            int max = 0;
    
            for(int i = 0; i<nums.size()-1; i++){
                low = 0;
                high = i+1;
                while(high!=nums.size()){
                    int minus = 0;
                    for(int j = low; j<high+1; j++){
                        if(nums[j]<0){
                            minus++;
                        }
                    }
                    if(minus%2==0){
                        for(int j = low; j<high+1; j++){
                            multi = multi*nums[j];
                        }
                        low++;
                        high++;
                        if(multi<0){
                            multi = 1;
                            continue;
                        }
                        if(max<multi){
                            max = multi;
                        }
                        multi = 1;
    
                    }else{
                        low++;
                        high++;
                    }
                }
            }
            // if(max>*max_element(nums.begin(), nums.end())){
            //     return max;
            // }else{
            //     return *max_element(nums.begin(), nums.end());
            // }
    
            return max>*max_element(nums.begin(), nums.end()) ? max : *max_element(nums.begin(), nums.end());
        }
    };