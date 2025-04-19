#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> grid= {
        {1},
        {2},
        {3}
    };

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            if(i+1 < grid.size()){
                if(grid[i][j] != grid[i+1][j]){
                    cout<<"Falsy"<<endl;
                    return false;
                }
            }

            if(j+1 < grid[i].size()){
                if(grid[i][j] == grid[i][j+1]){
                    cout<<"Falsy"<<endl;
                    return false;
                }
            }
        }
    }

    cout<<"Truthy"<<endl;
    return 0;
}