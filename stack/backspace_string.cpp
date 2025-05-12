#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string s = "ab#c";
    string t = "ad#c";

    vector<char> sStack;
    vector<char> tStack;


    for(char c : s){
        if(c != '#'){
            sStack.push_back(c);
        }else{
            sStack.pop_back();
        }
    }

    for(char c : t){
        if(c != '#'){
            tStack.push_back(c);
        }else{
            tStack.pop_back();
        }
    }

    for(int i = 0; i<sStack.size(); i++){
        if(sStack[i] != tStack[i]){
            return false;
        }
    }

    return true;

}