#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> target = {1,2,3,4};
    vector<int> arr = {2,4,1,3};
    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());

    if(target == arr){
        return true;
    }else{
        return false;
    }
    return false;
}