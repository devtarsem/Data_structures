#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<vector<int>> grid = {
        {10},
    };

    for(int i = 0; i<grid.size(); i++){
        sort(grid[i].begin(), grid[i].end());
    }

    int sum = 0;
    for(int i = 0; i<grid[0].size(); i++){
        vector<int> temp;
        for(int j = grid.size()-1; j>-1; j--){
            temp.push_back(grid[j][i]);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        sum += temp[0];
    }

    cout<<sum;

}