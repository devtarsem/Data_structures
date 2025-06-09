#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {6,5,7,9,2,2};
    sort(arr.begin(), arr.end());

    int diff = arr[i] - arr[i-2]

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] - arr[i+1] != diff){
            return false;
        }
    }

    return true;
}