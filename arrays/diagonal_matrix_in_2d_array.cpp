#include<iostream>
using namespace std;

int main(){
    int a[4][4] = {
        {1,0,0,0},
        {0,2,0,0},
        {0,0,3,0},
        {0,0,0,4}
    };
    int* diaMat = new int[4];
    for(int i = 0; i<4; i++){
        for(int j=0; j<4; j++){
            if(a[i][j]!=0 && i==j){
                diaMat[i] = a[i][j];
            }
        }
    }

    for(int j = 0; j<4; j++){
        cout<<diaMat[j]<<endl;
    }
}