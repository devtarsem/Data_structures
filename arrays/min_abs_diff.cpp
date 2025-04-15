#include<iostream>
#include<vector>
#include<algorithm>
#include<Math.h>
using namespace std;

int main(){
    vector<int> arr = {4,2,1,3};
    std:sort(arr.begin(), arr.end());

    int diff = abs(arr[0] - arr[1]);
    vector<vector<int>> final;
    vector<int> pre;

    for(int i = 0; i<arr.size(); i++){
        int low = i;
        int high = i + 1;
        
        while(high!=arr.size()){
            if(abs(arr[low] - arr[high]) == diff ){
                if(arr[low] > arr[high] ){
                    pre.push_back(arr[high]);
                    pre.push_back(arr[low]);
                }else{
                    pre.push_back(arr[low]);
                    pre.push_back(arr[high]);
                }

                final.push_back(pre);
                pre.clear();
            }
            high++;
        }
    }
}