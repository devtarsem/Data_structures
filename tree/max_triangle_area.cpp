#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> points = {
        {0,0},
        {0,1},
        {1,0},
        {0,2},
        {2,0}
    };

    std::sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
        return a[1]<b[1];
    });

    vector<int> max2;
    max2.push_back(points[points.size()-1][0]);
    max2.push_back(points[points.size()-1][1]);

    points.erase(points.begin() + points.size()-1);

    std::sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0]<b[0];
    });

    vector<int> max1;
    max1.push_back(points[points.size()-1][0]);
    max1.push_back(points[points.size()-1][1]);

    points.erase(points.begin() + points.size()-1);


    vector<int> mid;
    mid.push_back((max1[0] + max2[0])/2);
    mid.push_back((max1[1] + max2[1])/2);


    std::sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0]<b[0];
    });



}
