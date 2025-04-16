#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    vector<int> arr;

    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            arr.push_back(matrix[i][j]);
        }
    }

    int newrow = matrix[0].size();
    int newcol = matrix.size();
    vector<vector<int>> matrix2 ;
    int iterator = 0;

    for(int i = 0; i<newrow.size(); i++){
        for(int j = 0; j<newcol.size(); j++){
            matrix2.push_back(arr[iterator]);
            iterator++;
        }
    }
}