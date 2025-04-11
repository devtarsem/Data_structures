#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {23,2,6,4,7};
    int k = 6;

    for(int i = 0; i<nums.size(); i++){
        int low = 0;
        int high = i+1;
        while(high<nums.size()){
            int sum = 0;
            for(int p = low; p<high+1; p++){
                sum += nums[p];
            }
            if(sum%k == 0){
                cout<<"yes k is founded"<<endl;
                return true;
            }else{
                low++;
                high++;
            
            }
        }
    }

}