#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* creatingDoublyLinkedList(int a[], int size){
    Node* head = new Node();
    head->prev = nullptr;
    head->next = nullptr;
    Node* temp = head;

    for(int i = 0; i<size; i++){
        Node * t = new Node();
        temp->next = t;
        t->next = temp;
        t->prev = temp;
        t->data = a[i];
        temp = temp->next;
    }
    Node* final = head->next;
    return final;
}

void printingLinkedList(Node* head){
    Node* p = head;
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}

int main(){
    int a[5] = {1,2,3,4,5};
    Node* list = creatingDoublyLinkedList(a,5);
    printingLinkedList(list);
}