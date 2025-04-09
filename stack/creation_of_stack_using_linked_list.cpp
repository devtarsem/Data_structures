#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

struct stack{
    Node* top;
    Node* list;
};

void InsertionInStack(stack *p, int val){
    Node* node = new Node();
    node->val = val;
    if(!p->top->val){
        p->top->val = val;
    }else{
        node->next = p->top;
        p->top = node;
    }
}

void PopFromStack(stack *p){
    if(!(p->top)){
        cout<<"the stack is empty"<<endl;
    }else{
        Node* nd = p->top;
        p->top = p->top->next;
        delete(nd);
    }
}

int main(){
    stack s;
    s.list = new Node();
    s.top = s.list;

    InsertionInStack(&s, 10);
    InsertionInStack(&s, 11);
    InsertionInStack(&s, 12);
    InsertionInStack(&s, 13);
    InsertionInStack(&s, 14);
    PopFromStack(&s);
    PopFromStack(&s);

    while(s.top){
        cout<<s.top->val<<endl;
        s.top = s.top->next;
    }
    
}