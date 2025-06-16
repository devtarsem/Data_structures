#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;
#include <sstream>

int main(){
    string s = "is2 sentence4 This1 a3";
    istringstream iss(s);
    vector<string> tokens;
    string token;

    while(iss >> token){
        tokens.push_back(token);
    }

    sort(tokens.begin(), tokens.end(), [](string a, string b){
        return a[a.size()-1] < b[b.size()-1];
    });
    string final;
    for(int i = 0; i<tokens.size(); i++){
        tokens[i].pop_back();
        i!= tokens.size()-1 ? final+=tokens[i] + " " : final+=tokens[i];
    }
    return final;
}