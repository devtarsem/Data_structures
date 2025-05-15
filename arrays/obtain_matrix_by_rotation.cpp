#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

vector<int> findingKeys(vector<vector<int>> mat){
    vector<int> matkeys;
    for(int i = 0; i<mat.size(); i++){
        int matMulti = 1;
        int sum = 0;
        for(int j = 0; j<mat.size(); j++){
            sum = sum + mat[i][j]*matMulti;
            matMulti = matMulti*10;
        }
        matkeys.push_back(sum);
    }

    return matkeys;
}

int main(){
    vector<vector<int>> mat = {
        {0,0,0},
        {0,1,0},
        {1,1,1},

    };
    
    vector<vector<int>> target = {
        {1,0},
        {0,1},
    };
    vector<int> flatTarget;
    vector<int> flatrotatedMat;

    // flaten target
    for(int i = 0; i<target.size(); i++){
        for(int j = 0; j<mat.size(); j++){
            flatTarget.push_back(target[i][j]);
        }
    }

    int iteration = 0;
    // rotate matrix
    while(iteration != 5){
        vector<vector<int>> rotated;
        int col = 0;
        int row = mat.size()-1;
        vector<int> pre;
        while(col!=mat.size()){
            while(row!=-1){
                pre.push_back(mat[row][col]);
                flatrotatedMat.push_back(mat[row][col]);
                row--;
            }
            rotated.push_back(pre);
            pre.clear();
            col++;
            row = mat.size()-1;
        }
        mat = rotated;
        iteration++;

        int rop = 0;
        while(rop!=flatrotatedMat.size()){
            if(flatrotatedMat[rop] != flatTarget[rop]){
                break;
            }else{
                rop++;
            }
        }

        if(rop == flatrotatedMat.size()){
            return 1;
        } 

    }

    

    return 0;
}