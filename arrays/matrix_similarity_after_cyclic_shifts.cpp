#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    vector<vector<int>> matCopy = mat;

    int k = 4;

    while(k!=0){
        for(int i = 0; i<mat.size(); i++){
            if(i%2 == 0){
                // even indexx
                for(int j = 0; j<mat[i].size()-1; j++){
                    swap(mat[i][j] , mat[i][j+1]);
                }

            }else{
                int last = mat[i][mat[i].size()-1];
                for(int j = mat[i].size()-1; j>0; j--){
                    mat[i][j] = mat[i][j-1];
                }
                mat[i][0] = last;
            }
        }
        k--;
    }

    for(int i = 0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    return mat == matCopy ? true : false;

}