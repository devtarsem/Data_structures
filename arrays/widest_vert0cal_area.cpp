#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> points = {
        {3,1},
        {9,0},
        {1,0},
        {1,4},
        {5,3},
        {8,8},

    };
    sort(points.begin(), points.end(), [](vector<int> a, vector<int> b){
        return a[0]>b[0];
    });

    int maxi = 0;
    for(int i = 0; i<points.size()-1; i++){
        if(points[i][0] - points[i+1][0] > maxi){
            maxi = points[i][0] - points[i+1][0];
        }
    }

    cout<<maxi<<endl;
}