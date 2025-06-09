#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    vector<int> arr = {6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
    sort(arr.begin(), arr.end());

    int start = arr.size() * 0.05;
    int end = arr.size() - start;

    double mean = 0;
    for(int i = start; i<end; i++){
        mean = mean + arr[i];
    }
    mean = mean / (arr.size() - arr.size()*0.10);
    cout<<mean;

}