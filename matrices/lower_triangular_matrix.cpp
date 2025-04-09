#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> linAr = {1,2,3,4,5,6,7,8,9,5};
    int rows = 4;
    int cols = 4;
    int arr[rows][cols];

    // lower triangular matrix
    
    // for(int i = 0; i<rows; i++){
    //     for(int j = 0; j<cols; j++){
    //         if(i>=j){
    //             arr[i][j] = linAr[(((i+1)*(i))/2) + j];
    //         }else{
    //             arr[i][j] = 0;
    //         }
    //     }
    // }

    // upper trinaular mar
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(j>=i){
                arr[i][j] = linAr[(((j+1)*(j))/2) + i];
            }else{
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j];
        }
        cout<<" "<<endl;
    }

}