#include<iostream>

struct Node{
    int data;
    Node* next;
};

Node* mergingTwoLinkedList(Node* first, Node* second){
    Node* p = first;
    Node* s = p->next;
    Node* r = second;
    Node* l = NULL;

    while(r){
        if(r->data > p->data && r->data < s->data){
            l =  r;
            r->next = s;
            p->next = r;


        }else{
            p=s;
            s=s->next;
        }
    }

}

int main(){

}