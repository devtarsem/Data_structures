#include<iostream>
#include<vector>
#include <cctype>
using namespace std;
#include<string>

int main(){
    string s = "lEeeetcode";

    vector<char> charStack;

    for(int i = 0; i<s.size(); ){
        int acsii = s[i];
        if(acsii >= 65 && acsii <= 90){
            if(i-1 >= 0){
                if(tolower(s[i]) == s[i-1] ){
                    charStack.pop_back();
                    i++;
                }else{
                    i++;
                    i++;
                }
            }else{
                i++;
                i++;
            }
        }else{
            charStack.push_back(s[i]);
            i++;
        }
    }
    string final;
    for(int i = 0; i<charStack.size(); i++){
        cout<<charStack[i]<<endl;
        final = final + charStack[i];
    }
    cout<<final;
}