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
void printingLinkedListInReverseManner(Node* head){
    Node* p = head;
    while(p->next){
        p = p->next;
    }
    while(p->prev){
        cout<<p->data<<endl;
        p= p->prev;
    }
}
int main(){
    int a[5] = {1,2,3,4,5};
    Node* doubleList = createDoublyLinkedList(a,5);
    printingLinkedListInReverseManner(doubleList);
}