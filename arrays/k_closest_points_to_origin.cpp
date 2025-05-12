#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> points = {
        {3,3},
        {5,-1},
        {2,4}
    };
    int k = 2;
    vector<int> pre;

    vector<vector<int>> final;

    for(int i = 0; i<points.size(); i++){
        int distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
        pre.push_back(points[i][0]);
        pre.push_back(points[i][1]);
        pre.push_back(distance);
        final.push_back(pre);
        pre.clear();

    }


    sort(final.begin(), final.end(), [](vector<int> a, vector<int> b){
        return a[2] < b[2];
    });

    final.assign(final.begin() + 0, final.begin() + k);

    for(int i = 0; i<final.size(); i++){
        final[i].pop_back()
    }

    return final;

}
