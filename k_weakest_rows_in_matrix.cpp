#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> mat = {
        {1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}

    };

    int k = 3;
    vector<vector<int>> weakRows;
    vector<int> pre;
    int count = 0;

    for(int i = 0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            if(mat[i][j] == 1){
                count++;
            }else{
                break;
            }
        }
        pre.push_back(count);
        pre.push_back(i);
        weakRows.push_back(pre);
        pre.clear();
        count = 0;
    }

    sort(weakRows.begin(), weakRows.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] <b[0];
    });

    vector<int> final;
    for(int i = 0; i<=k; i++){
        for(int j = 0; j<weakRows[i].size()-1; j++){
            final.push_back(weakRows[i][j+1]);
            // cout<<"count: -"<<weakRows[i][j]<<" "<<"row : - "<<weakRows[i][j+1]<<endl;
        }
    }

    reurn final;
}