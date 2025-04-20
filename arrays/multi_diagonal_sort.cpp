#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> grid = {
        {2,1},
        {1,0}
    };

    if(grid.size()==1){
        return grid;
    }

    vector<int> pre;

    for(int i = 0; i<grid[0].size(); i++){
        int row = 0;
        int col = i;
        while(row!=grid.size() && col!=grid[0].size()){
            pre.push_back(grid[row][col]);
            row++;
            col++;
        }
        sort(pre.begin(), pre.end());
        row = 0;
        col = i;
        int iterator = 0;
        while(row!=grid.size() && col!=grid[0].size()){
            grid[row][col] = pre[iterator];
            iterator++;
            row++;
            col++;
        }
        pre.clear();
    }


    for(int i = 0; i<grid.size(); i++){
        int row = i;
        int col = 0;
        while(row!=grid.size() && col!=grid[0].size()){
            pre.push_back(grid[row][col]);
            row++;
            col++;
        }
        sort(pre.begin(), pre.end(), greater<int>());
        row = i;
        col = 0;
        int iterator = 0;
        while(row!=grid.size() && col!=grid[0].size()){
            grid[row][col] = pre[iterator];
            iterator++;
            row++;
            col++;
        }
        pre.clear();
    }

    return grid;
}