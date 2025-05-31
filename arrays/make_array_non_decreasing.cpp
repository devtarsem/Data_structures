#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2,27,15};
    vector<int> record;

    for(int i = 0; i<nums.size(); ){
        if(i == 0){
            record.push_back(nums[i]);
            i++;
        }else{
            if(nums[i] >= record[record.size() - 1]){
                record.push_back(nums[i]);
                i++;
            }else{
                if(i+1 < nums.size()){
                    record.push_back(max(nums[i], nums[i+1]));
                    i++;
                    i++;
                }else{
                    i++;
                }

            }
        }
    }

    for(int i = 0; i<record.size(); i++){
        cout<<record[i]<<endl;
    }
}