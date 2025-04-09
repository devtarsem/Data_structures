#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> g = {10,9,8,7};
    vector<int> s = {5,6,7,8};
    int child = 0;

    for(int i = 0 ; i<g.size(); i++){
        for(int j = i ; j<s.size(); j++){
            if(s[j] >= g[i]){
                child++;
                break;
            }
        }
    }

    cout<<child;

}