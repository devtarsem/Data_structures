#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void printingCircularLinkedList(Node* head){
    Node* p = head;
    do{
        cout<<p->data<<endl;
        p = p->next;
    }while(p!=head);
}

void pritingCircularListWithRecursion(Node* head){
    Node* p = head;
    static int count = 0;
    while(p!=head || count==0){
        count = 1;
        cout<<p->data<<endl;
        p=p->next;
    }
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
    printingCircularLinkedList(head);
    cout<<'hello'<<endl;
    pritingCircularListWithRecursion(head);
    return 0;

}
