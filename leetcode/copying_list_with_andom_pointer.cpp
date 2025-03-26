#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node* random;
};


int main(){
    Node* head = new Node();
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();

    head->val = 0;
    a->val = 1;
    b->val = 2;
    c->val = 3;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = nullptr;

    head->random = c;
    a->random = b;
    b->random = nullptr;
    c->random = head;

    Node* newList = new Node();
    Node* s = head;

    Node* p = newList;

    while(s){
        Node* temp = new Node();
        temp->val = s->val;
        temp->random = s->random;
        p->next = temp;
        p = p->next;
        s = s->next;
    }
    p = head;
    while(p){
        cout<<p->val<<endl;
        p = p->next;
    }


    
}