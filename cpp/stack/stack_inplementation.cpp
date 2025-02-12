#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

int pushElementInStack(int top, stack *st, int element){
    if(st->size == top+1){
        cout<<"The stack is full"<<endl;
        return 0;
    }else{
        st->top++;
        st->s[st->top] = element;
    }
    return 0;
}

int popFromSTack(stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"The stack is empty"<<endl;
        return x;
    }else{
        x = st->s[st->top];
        st->s[st->top] = 0;
        st->top--;
        return x;
    }
}


void printingStack(stack *st, int size){
    for(int i=st->top; i>=0; i--){
        cout << st->s[i]<<endl;
    }
}

int peakOfAStack(stack *st, int pos){
    if(st->top==-1){
        cout <<"stack is empty"<<endl;
        return 0;
    }else{
        return st->s[pos+1]; 
    }
}

void stackTop(stack *s1){
    int top = s1->top!=-1 ? s1->s[s1->top] : 0;
    cout<<"The top of stack is : "<< top <<endl;
}

void isEmpty(stack *s1){
    if(s1->top==-1){
        cout<<"The stack is empty"<<endl;
    }
}

void isFull(stack *s1){
    if(s1->top==s1->size-1){
        cout<<"The stack is full"<<endl;
    }else{
        cout<<"The stack is not full"<<endl;
    }
}

int main(){

    stack s1;
    s1.size = 5;
    s1.top = -1;
    s1.s = new int [s1.size];
    pushElementInStack(s1.top, &s1,6);
    pushElementInStack(s1.top, &s1,5);
    pushElementInStack(s1.top, &s1,4);
    pushElementInStack(s1.top, &s1,3);
    pushElementInStack(s1.top, &s1,2);
    popFromSTack(&s1);
    // popFromSTack(&s1);
    // popFromSTack(&s1);
    // popFromSTack(&s1);
    // popFromSTack(&s1);
    pushElementInStack(s1.top, &s1,2);

    printingStack(&s1, 5);
    stackTop(&s1);
    isEmpty(&s1);
    isFull(&s1);
}