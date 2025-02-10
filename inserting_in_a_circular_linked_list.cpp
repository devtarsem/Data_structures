#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* insertionIncircularList(Node* head, int pos){
    Node* p = head;
    Node* s = NULL;

    Node* newNode = new Node();
    newNode->data = 15;
    int count = 0;
    if(pos==0){
        while(p!=head || count==0){
            s = p;
            p = p->next;
            count++;
        }
        s->next = newNode;
        newNode->next = p;
        return newNode;

    }else{
        for(int i = 1; i<pos;i++){
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
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
int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    first->data = 9;
    second->data = 8;
    third->data = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = head;
    Node* updatedList = insertionIncircularList(head, 0);
    printingCircularLinkedList(updatedList);
}