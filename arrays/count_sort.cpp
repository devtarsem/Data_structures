#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> p = {4,8,7,9,5,7,5,8};
    int max = INT32_MIN;
    for(int i = 0; i<p.size(); i++){
        if(max<p[i]){
            max = p[i];
        }
    }

    int *arr = new int[max];
    for(int i = 0; i<max; i++){
        arr[i] = 0;
    }

    for(int i = 0; i<p.size(); i++){
        arr[p[i]] += 1;
    }

    int iter = 0;

    for(int i = 0; i<max; i++){
        while(arr[i] != 0){
            if(arr[i]>0){
                p[iter] = i;
                iter++;
                arr[i]--;
            }
        }
    }

    for(int i = 0; i<p.size(); i++){
        cout<<p[i]<<endl;
    }
}