#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

 int main(){
    vector<vector<int>> nums = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    // rows sum
    vector<int> rowsSum;
    for(int i = 0; i<nums.size(); i++){
        int sum = accumulate(nums[i].begin(), nums[i].end(), 0);
        rowsSum.push_back(sum);
    }

    

    // cols sum
    int cols = 0;
    vector<int> colSum;

    for(int i = 0; i<nums.size(); i++){
        vector<int> col;
        for(int j = 0; j<nums.size(); j++){
            col.push_back(nums[j][cols]);
        }

        int sum = accumulate(col.begin(), col.end(), 0);
        colSum.push_back(sum);
        cols++;
    }


    int row = 0;
    int col = 0;
    int count = 0;
    while(row!= rowsSum.size() && col!= colSum.size()){
        if(rowsSum[row] == 1 && colSum[col] == 1){
            count++;
        }
        row++;
        col++;
    }
    cout<<count;

    // for(int i = 0; i<nums.size(); i++){
    //     for(int j = 0; j<nums[i].size(); j++){
    //         if(nums[i][j] == 0){
    //             break;
    //         }else{
    //             int sum = accumulate(nums[i].begin(), nums[i].end(), 0);
    //             if(sum!=1) break;

    //             vector<int> cols;
    //             for(int i = 0; i<nums.size(); i++){
    //                 cols.push_back(nums[i][])
    //             }
    //         }
    //     }
    // }

 }