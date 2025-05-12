#include<iostream>
#include<vector>
using namespace std;
#include<string>

int main(){
    string s = "abbaca";
    vector<char> sStack;

    for(int i = 0;i<s.size(); ){
        if(i+1 <= s.size()-1){
            if(s[i] == s[i+1]){
                i++;
                i++;
            }else{
                if(sStack.size()!= 0 && s[i] == sStack[sStack.size()-1]){
                    sStack.pop_back();
                    i++;
                }else{
                    sStack.push_back(s[i]);
                    i++;
                }
            }
        }
    }
    string final;
    for(int i = 0; i<sStack.size(); i++){
        cout<<sStack[i]<<endl;
        final = final + sStack[i];
    }

    return final;

}