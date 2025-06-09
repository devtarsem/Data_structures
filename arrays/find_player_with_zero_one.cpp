#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

int main(){
    vector<vector<int>> matches = {
        {2,3},
        {1,3},
        {5,4},
        {6,4},
        // {5,7},
        // {4,5},
        // {4,8},
        // {4,9},
        // {10,4},
        // {10,9},

    };

    vector<int> wins;
    vector<int> looser;

    set<int> winners;
    for(int i = 0; i<matches.size(); i++){
        winners.insert(matches[i][0]);
    }

    

    map<int, int> lossers;
    for(int i = 0; i<matches.size(); i++){
        lossers[matches[i][1]]++;
    }

    for(const auto &pair1 : lossers){
        if(pair1.second == 1){
            looser.push_back(pair1.first);
        }
    }

    for (int val : winners) {
        if(lossers.find(val) == lossers.end()){
            wins.push_back(val);
        }

    }
    cout<<"wins"<<endl;

    for(int i = 0; i<wins.size(); i++){
        cout<<wins[i]<<endl;
    }
    cout<<"loss"<<endl;
    for(int i = 0; i<looser.size(); i++){
        cout<<looser[i]<<endl;
    }

    vector<vector<int>> final;
    final.push_back(wins);
    final.push_back(looser);

}