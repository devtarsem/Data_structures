#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<string> copyStrs = strs;

    for(int i = 0; i<copyStrs.size(); i++){
        sort(copyStrs[i].begin(), copyStrs[i].end());
    }

    // sort(copyStrs.begin(), copyStrs.end());

    vector<vector<string>> final;
    vector<string> temp;
    for(int i = 0; i<copyStrs.size(); i++){
        for(int j = 0; j<copyStrs.size(); j++){
            if(copyStrs[i] == copyStrs[j]){
                temp.push_back(strs[j]);
            }
        }
        final.push_back(temp);
        temp.clear();

    }   

    map<vector<string>, int> numMap;

    for(auto vpar : final){
        numMap[vpar]++;
    }


    vector<vector<string>> full;

     for (const auto& entry : numMap) {
         const vector<string>& group = entry.first;
         const int& key = entry.second;
        full.push_back(entry.first);
    }

}
