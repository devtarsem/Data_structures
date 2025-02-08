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

Node* deletingAnElementFromList(Node* head, int key){
    Node* first = head;
    Node *p = NULL;
    int count = 1;

    while(first){
        if(key==first->data && !(head->data == key)){
            p->next = first->next;
            return head;
        }else if(key==first->data && (head->data == key)){
            p = first;
            first = first->next;
            return first;
        }
        else{
            p = first;
            first = first->next;

        }
    }
    return head;
}


void printingLinkedList(Node* head){
    while(head){
        cout<<head->data<<endl;
        head= head->next;
    }
}

int main(){
    int a[5] = {4,8,9,6,7};
    Node* list = createLinkedList(a,5);
    
    int key = 0;
    Node* updatedList = deletingAnElementFromList(list, 7);
    printingLinkedList(updatedList);
    
}