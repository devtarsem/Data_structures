#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* createDoublyLinkedList(int a[], int size){
    Node* head = new Node();
    head->prev = nullptr;
    head->next = nullptr;
    Node* temp = head;

    for(int i = 0; i<size; i++){
        Node * t = new Node();
        temp->next = t;
        t->next = nullptr;
        t->prev = temp;
        t->data = a[i];
        temp = temp->next;
    }
    Node* final = head->next;
    return final;
}
void printingLinkedList(Node* head){
    while(head){
        cout<<head->data<<endl;
        head= head->next;
    }
}

Node* reverseDoubleLinkedList(Node* head){
    Node* p = head;
    int size = 0;
    while(p){
        size++;
        p = p->next;
    }
    int prevArray[size];
    int copyArray[size];

    p = head;

    for(int i = 0; i<size; i++){
        copyArray[i] = prevArray[i] = p->data;
        
        p = p->next;

    }


    for(int i = 1; i<=size; i++){
        prevArray[size-i] = copyArray[i-1]; // [1,2,3,4,5]
    }
    p = head;

    for(int i = 0; i<size; i++){
        p->data = prevArray[i];
        p=p->next;
    }
    return head;
}

int main(){
    int A[5] = {1,2,3,4,5};
    Node* list = createDoublyLinkedList(A,5);
    Node* updatedLsit = reverseDoubleLinkedList(list);
    printingLinkedList(updatedLsit);
}