#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<map>

int main(){
    vector<int> nums  = {1,5,0,5};
    map<int, int> numMap;

    for(auto num : nums){
        numMap[num]++;
    }

    
    vector<pair<int,int>> vPar(numMap.begin(), numMap.end());


    sort(vPar.begin(), vPar.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second != b.second ? a.second < b.second : a.first > b.first;
    });
    vector<int> final;
    for(const auto &p : vPar){
        for(int i = 0; i<p.second; i++){
            final.push_back(p.first);
        }
    }

    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}