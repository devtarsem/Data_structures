#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
    vector<int> nums = {-5,-10,-5};

    if(nums.size()==2){
        return abs(nums[0] - nums[1]);
    }
    int diff = 0;
    int pre = 0;

    int start = 0;

    for(int i = 0; i%nums.size()<nums.size(); i++){
        if(i%nums.size() == 0){
            start++;
        }

        if(start == 2){
            break;
        }

        cout<<nums[i%nums.size()]<< " : "<<nums[(i+1)%nums.size()]<<endl;
        pre = abs(nums[i%nums.size()] - nums[(i+1)%nums.size()]);

        if(pre>diff){
            diff = pre;
        }
        pre = 0;

        
    }

    cout<<diff;

}