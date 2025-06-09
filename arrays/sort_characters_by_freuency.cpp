#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    string s = "tree";
    unordered_map<char, int> strMap;

    for(auto ch : s){
        strMap[ch]++;
    }
    string final;
    
    for(const auto& p : strMap){
        cout<<p.first <<" : "<<p.second<<endl;
        for(int i = 0; i<p.second; i++){
            final = final + p.first;
        }
    }
    cout<<final;

    // Print result
    // string strfinal;
    // for (const auto &p : vec) {
    //     for(int i = 0; i<p.second; i++){
    //         strfinal = strfinal + p.first;
    //     }
    //     cout << p.first << " : " << p.second << endl;
    // }


    // cout<<strfinal;
}