#include<iostream>
#include<vector>
using namespace std;
#include<string>

int main(){
    string s = "(()())(())(()(()))";
    vector<char> braces;
   
    int count = 0;
    for(int i = 0; i<braces.size(); ){
        if(braces[i] == '('){
            if(braces.size() == 0){
                braces.push_back('(');
            }
            i++;
        }else{
            if(braces[braces.size()-1] == '('){
                
            }
        }
    }

    cout<<count;
}