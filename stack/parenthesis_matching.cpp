#include<iostream>

#include<vector>

using namespace std;

struct stack{
    int size;
    char *s;
    int top;
};

void IsBalance(stack *k, string str){
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i] == '('){
            k->top++;
            k->s[k->top] = '(';
        }else if(str[i] == ')'){
            // k->s[k->top] ='';
            k->top--;
        }
    }
    if(k->top == -1){
        cout<<"The expression is balanced"<<endl;
    }else{
        cout<<"The expression is not balanced"<<endl;

    }
}

int main(){

    string expression = "(((a*b)) + ((d*g))";
    vector<char> expConvert ;

    for(char c : expression){
        expConvert.push_back(c);
    }

    stack z;
    z.size = expConvert.size()-1;
    z.s = new char[z.size];
    z.top = -1;

    IsBalance(&z, expression);

}