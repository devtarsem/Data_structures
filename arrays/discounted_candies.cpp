#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> cost = {6,5,7,9,2,2}; // 9 7  5 2  -- 9 + 7 + 5 + 2
    sort(cost.begin(), cost.end());

    int cash = 0;
    for(int i = cost.size()-1; i<-1;)[
        if(cash >= cost[i]){
            i--;
        }
        cash = cash + cost[i] + cost[i-1];
        i--;
        i--;
    ]

}