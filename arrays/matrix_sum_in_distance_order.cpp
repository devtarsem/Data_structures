#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<string>
#include<map>
#include<math.h>

int main(){
    int rows = 1;
    int cols = 2;
    int rCenter = 0;
    int cCenter = 0;
    vector<vector<int>> vPar;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            int distance = abs(i - rCenter) +abs(j - cCenter);
            vector<int> temp ;
            temp.push_back(i);
            temp.push_back(j);
            temp.push_back(distance);
            vPar.push_back(temp);
            temp.clear();
        }
    }

    sort(vPar.begin(), vPar.end(), [](vector<int> a, vector<int> b){
        return a[2]<b[2];
    });

    vector<vector<int>> final;
    for(int i = 0; i<vPar.size(); i++){
        vector<int> temp;
        temp.push_back(vPar[i][0]);
        temp.push_back(vPar[i][1]);
        final.push_back(temp);
        temp.clear();
    }

    return final;

}