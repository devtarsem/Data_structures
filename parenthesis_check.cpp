#include<iostream>
using namespace std;

struct stack {
    int data;
    char arr[];
};

int isBalance(char a[], int size){
    stack p;
    int top = -1;
    p.arr = new char[size];
    for(int i = 0; i<size; i++){
        if(a[i]=='('){
            top++;
            p.arr[top] = a[i];
    
        }else if(a[i]==')'){
            p.arr[top] = ' ';
            top--;
        }
    }
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char a[13] = {'(', '(', 'a' , '+', 'b', '*', '(', 'c', '-', 'd', ')',')'};
    int respo = isBalance(a, 13);
    if(respo){
        cout<<"the express is well balanced";
    }else{
        cout<<"the express is not well balanced";

    }
    return 0;
}