#include<iostream>
#include<vector>
using namespace std;
#include<string>

int main(){
    string s = "(*))";
    vector<char> stack1;
    vector<char> stack2(s.size(),0);

    for(int i = 0; i<s.size(); i++){
        if(s[i] == '('){
            stack1.push_back('(');
        }else if(s[i] == '*'){
            stack2[i] = '*';
        }else if(s[i] == ')'){
            if(stack1.size()!=0 && stack1[stack1.size()-1]=='('){
                stack1.pop_back();
            }else{
                for(int j = 0; j<i; j++){
                    if(stack2[j]!='*'){
                        cout<<"false";
                        return 0;
                    }
                }
            }
        }
    }

    cout<<"true"<<endl;
    return 1;

}