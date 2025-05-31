#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> arr1 = {2,1,100,3};
    vector<int> arr2 = {-5,-2,10,-3,7};
    int d = 6;
    int count = 0;

    for(int i = 0; i<arr1.size(); i++){
        int passed = 1;
        for(int j = 0; j<arr1.size(); j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                passed = 0;
                break;
            }
        }
        if(passed){
            count++;
        }
    }

    cout<<count<<endl;

}