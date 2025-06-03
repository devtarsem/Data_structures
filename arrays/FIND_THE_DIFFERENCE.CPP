#include<iostream>
#include<vector>
using namespace std;
#include<string>
int main(){
    string s = "abcd";
    string t = "abcde";

    for(int i = 0; i<t.size(); i++){
        int founded = 0;
        for(j = 0; j<s.size(); j++){
            if(t[i] == s[j]){
                founded = 1;
                break;
            }
        }
        if(!founded){
            return t[i];
        }
    }

}