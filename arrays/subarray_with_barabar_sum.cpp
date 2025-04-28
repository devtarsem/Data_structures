#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {77,95,90,98,8,100,88,96,6,40,86,56,98,96,40,52,30,33,97,72,54,15,33,77,78,8,21,47,99,48};

    int low = 0;
    long long sum = 0;
    long long pre = 0;

    for(int i = 0; i<nums.size()-1; i++){

        low = i;
        sum = nums[low] + nums[low + 1];

        while(low!=nums.size()-1){
            pre = nums[low] + nums[low + 1];
            
            if(sum == pre){
                cout<<"truelly"<<endl;
                return 0;
                break;
            }
            low++;
        }
    }

    cout<<"falsey"<<endl;


}