#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,4,5,10};
    int count = 0;

    int low ;
    int high;

    
    for(int i = 0; i<nums.size()-1; i++){
        low = i;
        high = i+1;
        int prod = nums[low] * nums[high];
        vector<int> newArr = nums;
        newArr.erase(newArr.begin() + low, newArr.begin() + high+1);
        
        for(int j = 0; j<newArr.size(); j++){
            // cout<<newArr[j]<< " ";
        }

        low = 0;
        high = 1;
        while(low!=newArr.size()-1){
            // cout<<low<<" : "<<high<<endl;
            int compareProd = newArr[low] * newArr[high];
            if(compareProd == prod){
                count++;
            }

            if(high == newArr.size()-1){
                low++;
                high = low + 1;
            }else{
                high++;
            }
        }
    }

    cout<<count;
}