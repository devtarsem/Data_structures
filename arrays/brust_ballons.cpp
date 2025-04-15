#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> points = {
        {10,16},
        {2,8},
        {1,6},
        {7,12}
    };
    std::sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];  // sort by the first element
    });

    int arrow = 0;
    int iterator = 1;
    
    for(int i = points.size()-1; i>-1; i--){
        for(int j = 0; j<points[i].size()-1; j++){

            if((points[i][j] >=  points[i-iterator][j]) || (points[i][j] ==  points[i-iterator][j-iterator]) ){
                arrow++;
            }

        }
        cout<<" "<<endl;
    }
}