#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n) {
        count += (n & 1);  // agar last bit 1 hai to count++
        n >>= 1;           // right shift by 1
    }
    return count;
}


int main(){
    vector<int> nums = {20,16};
    for(int j = 0; j<nums.size(); j++){
        for(int i = 0; i<nums.size(); i++){
            if(i+1<nums.size() && nums[i] > nums[i+1] && countSetBits(nums[i]) == countSetBits(nums[i+1])){
                swap(nums[i], nums[i+1]);
            }
        }
    }

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }

    if(is_sorted(nums.begin(), nums.end())){
        cout<<"true";
    }else{
        cout<<"false";

    }
}