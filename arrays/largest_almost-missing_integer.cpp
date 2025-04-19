#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int AlmostMiss(int k, vector<int> nums){
    for(int i = 0; i<nums.size(); i++){
        if(k!=1 && k!= nums.size()){
            int first = nums[0];
            int last = nums[nums.size()-1];
            vector<int> p = nums;
            sort(p.begin(), p.end());

            int firstClear = 1;
            for(int i = 1; i<p.size()-1; i++){
                if(p[i] == first && p[i+1] == first){
                    firstClear = -1;
                    break;
                }
            }

            int lastClear = 1;
            for(int i = 1; i<p.size()-1; i++){
                if(p[i] == last && p[i+1] == last){
                    lastClear = -1;
                    break;
                }
            }

            cout<<firstClear<< "  :  "<<lastClear;

            if(firstClear > 0 && lastClear < 0){
                cout<<"ans is "<<first;
                return first;
            }else if(firstClear < 0 && lastClear > 0){
                cout<<"ans is "<<last;
                return last;
            }else if(firstClear < 0 && lastClear < 0){
                nums.erase(nums.begin() + 0);
                nums.erase(nums.begin() + nums.size()-1);
                AlmostMiss(k, nums);
            }else if(firstClear > 0 && lastClear > 0){
                if(first > last){
                    cout<<"ans is"<<first;
                    return first;
                }else{
                    cout<<"ans is"<<last;
                    return last;
                    
                }
            }

        }else if(k==1 || k==nums.size()){
            sort(nums.begin(), nums.end());

            int point = 1;

            while(point){
                for(int i = nums.size()-1; i>0; i--){
                    if(nums[i] == nums[i-1]){
                        break;
                    }else{
                        point = 0;
                        cout<<"ans is"<<nums[i];
                        
                        return nums[i];
                        
                    }
                }
            }

        }
        return -1;
    }
}

int main(){
    vector<int> nums = {3,9,7,2,1,7};
    int k = 6;
    AlmostMiss(k, nums);
    
}
