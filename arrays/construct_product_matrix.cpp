#include<iostream>
#include<vector>
using namespace std;

int multiplex(vector<int> arr, int skip){
    int prod = 1;
    for(int i = 0; i<arr.size(); i++){
        prod = prod *  (i==skip ? 1 : arr[i]);
    }   
    // cout<<prod<<endl;
    return prod;
}

int main(){
    vector<vector<int>> grid= {
        {12345},
        {2},
        {1}

    };

    int rows = grid.size();
    int cols = grid[0].size();

    vector<int> flat;

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            flat.push_back(grid[i][j]);
        }
    }

    int iterator = 0;
    vector<int> pre;
    vector<vector<int>> final(rows, vector<int>(cols, 0));
    for(int i = 0; i<final.size(); i++){
        for(int j = 0; j<final[i].size(); j++){
            int multi = multiplex(flat, iterator);
            iterator++;
            final[i][j] = multi%12345;
        }
       
    }

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<final[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

}