#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *p = new Node();

Node* insertingAtLast(Node* p, int pos, int data){
    Node* insertionNode = new Node();
    insertionNode->data = data;
    while(p){
        p = p->next;
    }
    // for(int i = 1; i<pos; i++){
    //     p = p->next;
    // }

    insertionNode->next = p->next;
    p->next = insertionNode;

    return p;

}

void printingLinkedList(Node* head){
    while(head){
        cout<<head->data<<endl;
        head= head->next;
    }
}

int main(){
    Node* head = new Node();
    head->data = 10;
    p = head;

    Node* newLsit = insertingAtLast(p,0,11);
    printingLinkedList(newLsit);
}