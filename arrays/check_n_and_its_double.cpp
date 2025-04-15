#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> arr = {10,2,5,3}; // 2 3 5 10
    std::sort(arr.begin(), arr.end());

    for(int i = 0; i<arr.size(); i++){
        int low = 0;
        int high = arr.size()-1;
        int mid = (low + high) / 2;
        int target = arr[i]*2;
        while(high >= low){
            if(arr[mid] == target){
                cout<<"the doubling is found of : - "<<arr[mid]<<endl;
                break;
            }else if(arr[mid] > target){
                high = mid - 1;

            }else if(arr[mid] < target){
                low = mid + 1;
            }
            mid = (low + high) / 2;
        }
    }
}