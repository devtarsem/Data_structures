#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,2,1,-6,6,-7,9,1,2,0,1};
    int sum = 0;
    int count = 0;
    
    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }

    int indSum = sum / 3;

    int calc = 0;

    for(int i = 0; i<arr.size(); i++){
        calc = calc + arr[i];
        if(calc == indSum){
            count++;
            calc = 0;
        }
    }

    cout<<count;

}