#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<string>
#include<map>

int main(){
    string s = "abc";
    int k = 2;
    map<char, int> strMap;

    for(char ch : s){
        strMap[ch]++;
    }
    int del = 0;

    if(strMap.size() <= k){
        cout<<"0"<<endl;
        return 0;
    }else{
        vector<pair<char, int>> vec(strMap.begin(), strMap.end());
        sort(vec.begin(), vec.end(), [](pair<char, int> a, pair<char, int> b){
            return a.second < b.second;
        });
        int deletions = vec.size() - k;
        int iteration = 0;
        

        for(const auto &p : vec){
            del = del + p.second;
            iteration++;
            if(iteration == deletions){
                break;
            }
        }

    }


    cout<<del;

}