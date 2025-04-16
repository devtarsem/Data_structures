#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<vector<int>> grid = {
        {1,2},
        {3,4}
    };

    int z_projection = grid.size() * grid[0].size();
    int x_projection = 0;

    int y_projection = 0;

    for(int i = 0; i<grid.size(); i++){
        std::sort(grid[i].begin(), grid[i].end());
        x_projection += grid[i][grid[i].size()-1];
    }

    int iterator = 0;
    vector<int> pre;
    while(iterator != grid[0].size()){
        for(int i = 0; i<grid.size(); i++){
            pre.push_back(grid[i][iterator]);
        }
        iterator++;

        std::sort(pre.begin(), pre.end());
        y_projection += pre[pre.size()-1];
        pre.clear();

    }
    int area = x_projection + y_projection + z_projection;




}

