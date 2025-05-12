#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> grid = {
        {5,7,0},
        {0,3,1},
        {0,5,0},
    };

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            if(i == j && grid[i][j] ==0){
                cout<<"falsy"<<endl;
                return false;
            }
        }
    }

    int rows = -1;
    int cols = grid[0].size();

    while(cols!=0){
        if(grid[rows+1][cols-1] == 0){
            cout<<"falsy"<<endl;
            return false;
        }
        cols--;
        rows++;
    }

    rows = 0;
    cols = grid[0].size();

    while(rows < grid.size()){
        if(rows == 0 || rows == grid.size()-1){
            for(int i = 1; i<cols-2; i++){
                if(grid[rows][i] !=0){
                    cout<<"falsy"<<endl;
                    return false;
                }
            }
        }else{
            if(grid[rows][0] != 0 || grid[rows][cols-1] != 0){
                cout<<"falsy"<<endl;
                return false;
            }
        }
        rows++;
    }

    cout<<"true"<<endl;


}