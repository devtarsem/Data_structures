#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
#include<algorithm>

int main(){
    vector<vector<int>> grid = {
        {1,-2,-3},
        {2,3,5}
    };
    int k = 2;

    int colStart = 0;
    int rowStart = 0;
    int colStop = k;
    int rowStop = k;
    int minDiffFinal = INT32_MAX;

    for(int i = rowStart; i<rowStop; ){
        unordered_set<int> temp;
        for(int j = colStart; j<colStop; ){
            temp.insert(grid[i][j]);
        }
        vector<int> tempVec(temp.begin(), temp.end());

        // Now sort the vector
        sort(tempVec.begin(), tempVec.end());

        // Find min absolute diff
        int minDiff = INT_MAX;
        for (int i = 1; i < tempVec.size(); i++) {
            minDiff = min(minDiff, abs(tempVec[i] - tempVec[i - 1]));
        }
        if(minDiff < minDiffFinal){
            minDiffFinal = minDiff;
        }
        if(colStart+1 < grid[0].size()){
            colStart++;
            colStop++;
        }else{
            rowStart++;
            rowStop++;
        }

        if(rowStart+1 <= grid.size()){
            break;
        }
    }

    cout<<minDiffFinal;
}