#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> grid = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int k = 9;

    vector<int> flat;

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            flat.push_back(grid[i][j]);
        }
    }

    for(int j = 1; j<=k; j++){
        for(int i = flat.size()-1; i>0; i--){
            swap(flat[i], flat[i-1]);
        }                            
    }
    
    int iterator = 0;                           
    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            grid[i][j] = flat[iterator];
            iterator++;
        }
    }
}