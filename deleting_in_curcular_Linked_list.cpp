#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* createLinkedList(int a[], int size){
    Node* head = new Node();
    head->data = a[0];
    head->next = nullptr;


    Node* temp = head;

    for(int i = 0; i<size-1; i++){
        Node* newNode = new Node();
        newNode->data = a[i+1];
        newNode->next = nullptr;

        temp->next = newNode;
        temp = newNode;

    }

    return head;
}

void printingCircularLinkedList(Node* head){
    Node* p = head;
    do{
        cout<<p->data<<endl;
        p = p->next;
    }while(p!=head);
}

Node* deletingInCircularList(Node* head, int del){
    Node* p = head;
    Node* s = NULL;
    while(p->data != del){
        s = p;
        p = p->next;
    } 

    s->next = p->next;
    delete p;

    return head;
}

int main(){
    int a[5] = {1,2,3,4,6};
    Node* list = createLinkedList(a,5);
    Node* updatedlist = deletingInCircularList(list,3);
    printingCircularLinkedList(updatedlist);
}