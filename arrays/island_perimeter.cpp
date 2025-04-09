#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> grid = {
        {1,0}
    };

    int connections = 0;
    int perisum = 0;

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            if(grid[i][j] != 0){
                perisum = perisum + 4;

                if(i+1<=grid.size()-1){
                    if(grid[i+1][j]!=0){
                        connections += 1;
                    }
                }
                if(i-1>=0){
                    if(grid[i-1][j] != 0){
                        connections += 1;
                    }
                }
                if(j+1<=grid[i].size()-1){
                    if(grid[i][j+1]){
                        connections += 1;
                    }
                }
                if(j-1>=0){
                    if(grid[i][j-1]!=0){
                        connections += 1;
                    }
                }
                cout<<connections<<endl;

                perisum = perisum - connections;
                connections = 0;

            }
        }
    }

    cout<<perisum<<endl;
}