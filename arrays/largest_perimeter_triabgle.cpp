#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {2,1,2};
    sort(nums.begin(), nums.end());
    int peri = 0;
    int semipere = 0;

    for(int i = nums.size()-1; i>-1; i--){
        if(i-2 < 0){
            break;
        }
        int a = nums[i];
        int b = nums[i-1];
        int c = nums[i-2];

        //check triangle
        if(a+b> c && b+c>a && a+c> b){
            semipere = a + b + c;
            if(semipere>peri){
                peri = semipere;
            }
        }
    }

    cout<<peri;

}