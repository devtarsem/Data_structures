#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>


int main(){
    vector<vector<int>> triangle = {
        {2},
        {3,4},
        {6,5,7},
        {4,1,8,3}
    };

    int path = 0;

    for(int i = 0; i<triangle.size(); i++){
        std::sort(triangle[i].begin(), triangle[i].end());     
        path = path + triangle[i][0];   
    }

    cout<<path;
}