#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-2, 2, -3, 1};
    int l = 2;
    int r = 3;
    int sumP = INT32_MAX;

    int start = 0;
    int lCopy = l-1;

    while(lCopy!=r){
        while(lCopy!=nums.size()){
            int sum = 0;
            for(int i = start; i<=lCopy; i++){
                sum += nums[i];
            }
            if(sumP > sum && sum>0){
                cout<<start<<" : "<<lCopy<<endl;
                cout<<sum<<endl;
                sumP = sum;
            }
            lCopy++;
            start++;
        }
        lCopy = l + 1;
        start = 0;
    }

    return sumP == INT32_MAX ? -1 : sumP ;
}