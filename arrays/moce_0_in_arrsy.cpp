#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {0,0,1};
    if(nums.size()!=1){
            
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                for(int j= i ;j<nums.size()-1; j++){
                    nums[j] = nums[j+1];
                }
                nums[nums.size()-1] = 0;
                
            }else{
                if(i!=0){

                    while(nums[i-1]==0){
                        for(int j= i-1 ;j<nums.size()-1; j++){
                            nums[j] = nums[j+1];
                        }
                        nums[nums.size()-1] = 0;
                    }
                }
            }
            
        }
    }
    
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}