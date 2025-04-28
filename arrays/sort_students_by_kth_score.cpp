#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> score = {
        {10,8,9,1},
        {7,5,11,2},
        {4,8,3,15},
    };
    int k = 2;

    sort(score.begin(), score.end(), [](const vector<int> a, const vector<int> b){
        return a[2] > b[2];
    });

    for(int i = 0; i<score.size(); i++){
        for(int j = 0; j<score[i].size(); j++){
            cout<<score[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}