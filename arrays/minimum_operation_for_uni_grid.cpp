#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> grid  = {
        {1,2},
        {3,4}
    };
    int x = 2;
    vector<int> flat;
    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[0].size(); j++){
            flat.push_back(grid[i][j]);

        }
    }
    int final = INT32_MAX;
    for(int i = 0; i<flat.size(); i++){
        int operation = 0;
        for(int j = 0; j<flat.size(); j++){
            if(abs(flat[i] - flat[j]) >= x){
                operation += abs(flat[i] - flat[j])/x;
            }else{
                final = -1;
                return -1;
            }
        }

        if(operation < final){
            final = operation;
        }
    }

    cout<<final;
}