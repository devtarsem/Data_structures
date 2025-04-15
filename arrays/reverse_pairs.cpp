#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1,3,2,3,1};

    int i,j;
    i = 0;
    j = 1;

    int pairs = 0;

    while(i!=nums.size()){
        if(j>i && (nums[i] > 2 * nums[j])){
            pairs++;
        }
        j++;


        if(j>=nums.size()){
            i++;
            j = i + 1;
        }
    }

    cout<<pairs;

}