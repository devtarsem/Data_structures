#include<iostream>

#include<vector>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};


void InsertionInStack(stack *p, int val){
    if(p->top == p->size-1){
        cout<<"Stack overflows"<<endl;
    }else{
        p->top++;
        p->arr[p->top] = val;
    }
}

void PopFromStack(stack *p){
    if(p->top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
        p->arr[p->top] = 0;
        p->top--;
    }
}

void isEmpty(stack *p){
    if(p->top == -1){
        cout<<"The stack is empty"<<endl;
    }else{
        cout<<"The stack is not empty yet"<<endl;

    }
}

void isFull(stack *p){
    if(p->top == p->size-1){
        cout<<"The stack is full"<<endl;

    }else{
        cout<<"The stack is not full yet"<<endl;

    }
}

int main(){
    stack s;
    s.size = 10;
    s.top = -1;
    s.arr = new int[s.size];

    for(int i = 0; i<10; i++){
        InsertionInStack(&s, i);
    }

    for(int i = 0; i<2; i++){
        PopFromStack(&s);
    }

    for(int i = s.top; i>-1; i--){
        cout<<s.arr[i]<<endl;
    }

}