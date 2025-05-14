#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m = 1;
    int n = 1;

    vector<vector<int>> ops = {
        {1,1},
    };

    if(ops.size() == 0){
            return m*n;
        }

        vector<vector<int>> mat(m, vector<int> (n, 0));

        for(int i = 0; i<ops.size(); i++){
            for(int j = 0; j<ops[i][0]; j++){
                for(int p = 0; p<ops[i][1]; p++){
                    mat[j][p]++;
                }
            }
        }

        vector<int> matLin;
        for(int i =0 ; i<mat.size(); i++){
            for(int j = 0; j<mat[i].size(); j++){
                matLin.push_back(mat[i][j]);
            }
        }

        sort(matLin.begin(), matLin.end());

        int maxCount = 1;

        for(int i = matLin.size()-1; i>-1; i--){
            if(matLin.size() == 1){
                maxCount = 1;
                break;
            }
            if(matLin[i] == matLin[i-1]){
                maxCount++;
            }else{
                break;
            }
        }

        return maxCount;
}