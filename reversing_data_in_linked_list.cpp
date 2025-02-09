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

void printingLinkedList(Node* head){
    while(head){
        cout<<head->data<<endl;
        head= head->next;
    }
}

Node* reversingLinkedlist(Node* head){
    Node* p = head;
    Node* s = NULL;
    Node* f = NULL;
    while(p!=NULL){
        f = s;
        s = p;
        p=p->next;
        p->next = s;
    }
    head = s;
    return head;
}

int main(){
    int a[5] = {1,2,3,4,5};
    Node* list = createLinkedList(a,5);
    Node* updatedList = reversingLinkedlist(list);
    printingLinkedList(updatedList);
}