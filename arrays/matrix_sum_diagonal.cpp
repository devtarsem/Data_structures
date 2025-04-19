#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {
        {5},
       

    };

    if(mat.size()==1){
        return mat[0][0];
    }

    int sum = 0;
    int row = 0;
    int col = 0;

    while(row!= mat.size(), col!= mat[0].size()){
        sum = sum + mat[row][col];
        row++;
        col++;
    }

    int commonRow = 0;
    if(mat.size() % 2 != 0){
        commonRow = mat.size()/2;
    }

    row = 0;
    col = mat[0].size()-1;

    while(row!= mat.size(), col!= -1){
        
        sum = sum + mat[row][col];
        row++;
        col--;

    }

    if(commonRow){
        sum = sum - mat[commonRow][commonRow];
    }
    cout<<sum<<endl;
    
}