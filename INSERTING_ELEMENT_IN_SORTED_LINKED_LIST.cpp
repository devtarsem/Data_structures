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

Node* p = new Node();

Node* insertingInSortedList(Node* head, int key){
    p = head;
    int data = 0;
    Node* insertionNode = new Node();
    insertionNode->data = key;
    while(p){
        if(key>p->data && key < (p->next->data)){
            insertionNode->next = p->next;
            p->next = insertionNode;
            return head;
        }else if(key>p->data && key > (p->next->data) && p->next->next == nullptr){
            p->next->next = insertionNode;
            insertionNode->next = nullptr;
            return head;
        }else if(key<p->data){
            insertionNode->next = p;
            p = insertionNode;
            return p;
        }
        else{
            p = p->next;
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
    int a[5] = {5,6,7,8,22};
    Node* list = createLinkedList(a, 5);
    
    int key = 0;
    
    while(key!='#'){
        cout<<"Enter a element to add"<<endl;
        cin>>key;
        cout<<"Here is your list"<<endl;
        Node* updatedList = insertingInSortedList(list,key);
        printingLinkedList(updatedList);
    }
}