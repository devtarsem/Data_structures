#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {29,30,31,32,33,34,35,36,37};
    vector<int> pre= {};
    vector<int> final;

    if(nums.size()==1){
        return nums[0] + 1;
    }

    int indicator = 0;

    for(int i = 0; i<nums.size(); i++){
        if(pre.size()==0){
            pre.push_back(nums[i]);
        }

        if(nums[i+1] == nums[i] + 1){
            pre.push_back(nums[i+1]);
        }else{
            indicator = 1;
            for(int j = 0; j<pre.size(); j++){
                final.push_back(pre[j]);
            }
            pre.clear();
            break;
        }
    }

    if(!indicator){
        for(int j = 0; j<pre.size(); j++){
            final.push_back(pre[j]);
        }
    }

    int prefix = 0;
    for(int i = 0; i<final.size(); i++){
        prefix += final[i];
    }

    int low = 0;
    int high = nums.size()-1;
    int mid = (low + high) / 2;
    sort(nums.begin(), nums.end());

    while(low<=high){ // 1 2 3 2 6 -> 1 2 2 3 6
        if(nums[mid] == prefix){
            prefix++;
            low = 0;
            high = nums.size()-1;
        }else if(nums[mid] > prefix){
            high = mid - 1;
        }else if(nums[mid] < prefix){
            low = mid + 1;
        }
        mid = (low + high)/2;

    }

    cout<<prefix<<endl;

    // for(int i = 0; i<final.size(); i++){
    //     bool prefixFounded = false;
    //     if(final[i]==prefix){
    //         prefixFounded = true;
    //     }

    //     if(!prefixFounded) return prefix;

    //     while(!prefixFounded){
    //         prefix++;

    //     }
    // }

}