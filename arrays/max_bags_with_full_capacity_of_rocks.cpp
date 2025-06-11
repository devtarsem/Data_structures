#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> capacity = {2,3,4,5};
    vector<int> rocks = {1,2,4,4};
    int additionalRocks = 2;

    vector<int> needed;

    for(int i = 0; i<rocks.size(); i++){
        needed.push_back(capacity[i] - rocks[i]);
    }
    sort(needed.begin(), needed.end());
    for(int i = needed.size()-1; i>-1; i--){
        if(needed[i] <= additionalRocks){
            additionalRocks = additionalRocks - needed[i];
            needed[i] = 0;
        }
    }

    sort(needed.begin(), needed.end());
    int full = 0;
    for(int i = needed.size()-1; i>-1; i--){
        if(needed[i] == 0){
            full++;
        }

    }

    cout<<full<<endl;

}