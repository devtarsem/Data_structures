#include<iostream>
using namespace std;

struct Node{
    int data ;
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

Node* joiningTwoLinkedList(Node* first, Node* second){
    Node* p = first;
    Node* r = second;

    while(p->next!=nullptr){
        p = p->next;
    }
    p->next = r;
    r = first;

    return r;

}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {4,3,2,1,0};
    Node* first = createLinkedList(a,5);
    Node* second = createLinkedList(b,5);
    Node* joinedList = joiningTwoLinkedList(first, second);
    printingLinkedList(joinedList);
}