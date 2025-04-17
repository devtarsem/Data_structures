#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> preset(int row,int cols, vector<vector<int>> mat){
    
    vector<int> nums;
    while(row<mat.size() && cols<mat[0].size()){
        nums.push_back(mat[row][cols]);
        row++;
        cols++;

    }

    return nums;

}

int main(){
    vector<vector<int>> mat = {

        {3,3,1,1},
        {2,2,1,2},
        {1,1,1,2}
    };

    for(int i = 0; i<mat[0].size(); i++){
        int row, cols;
        row = 0;
        cols = i;
        vector<int> nums = preset(row, cols, mat);
        sort(nums.begin(), nums.end());
    
        row = 0;
        cols = i;
        int iterator = 0;
        while(row<mat.size() && cols<mat[0].size()){
            mat[row][cols] = nums[iterator];
            row++;
            cols++;
            iterator++;
        }
    
        nums.clear();
    }

    for(int i = 0; i<mat.size(); i++){
        int row, cols;
        row = i;
        cols = 0;
        vector<int> nums = preset(row, cols, mat);
        sort(nums.begin(), nums.end());
    
        row = i;
        cols = 0;
        int iterator = 0;
        while(row<mat.size() && cols<mat[0].size()){
            mat[row][cols] = nums[iterator];
            row++;
            cols++;
            iterator++;
        }
    
        nums.clear();
    }

    for(int i = 0; i<mat.size(); i++){
       for(int j = 0; j<mat[i].size(); j++){
        cout<<mat[i][j]<<" ";
       }
       cout<<" "<<endl;
    }
    
}