#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-15, 3, 16, 0};
    int k = 2;

    if(k==nums.size() && k + k > nums.size()){
        return false;
    }

    int low, low1, high, high1;
    low = 0;
    high = k-1;

    while(k!=nums.size()){
        int bend = 0;
        cout<<high<<endl;

        for(int i = low; i<=high; i++){
            if(i == high){
                break;
            }
            if(nums[i] >= nums[i+1]){
                bend = 1;
                low++;
                high++;
            }
        }
        cout<<high<<endl;

        if(!bend && high + k - 1<nums.size()-1){
            int bend2 = 0;
            cout<<high<<endl;
            for(int p = high + 1; p<=high + k; p++){
                if(p == nums.size()-1){
                    break;
                }
                if(nums[p] >= nums[p+1]){
                    bend2 = 1;
                }
            }


            if(!bend2){
                cout<<"truthy array"<<endl;
                return true;

            }
        }else{
            cout<<"falsy array";
            return false;
        }
    }
}