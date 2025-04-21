#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
    vector<vector<int>> points = {
        {1,1},
        {2,2},
        {3,3}
    };

    int area = abs(points[0][0]*(points[1][1] - points[2][1]) + points[1][0]*(points[2][1] - points[0][1]) + points[2][0]*(points[0][1] - points[1][1])) / 0.5;

    if(area != 0){
        return true;
    }else{
        return false;

    }

}