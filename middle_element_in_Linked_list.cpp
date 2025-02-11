#include<iostream>
using namespace std;

struct Node {
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

int MiddleNodeOfLinkedList(Node* list){
    int count = 0;
    Node* p = list;
    while(p){
        count++;
        p = p->next;
    }
    p = list;
    for(int i = 0; i<count/2; i++){
        p = p->next;
    }
    return p->data;

}

int main(){
    int A[8] = {1,2,3,4,5,4,5,9};
    Node* list = createLinkedList(A,8);
    int mid = MiddleNodeOfLinkedList(list);
    cout << "The middle term of the provided list is : "<<mid;
}