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

int CheckSort(Node* head){
    Node* p = head;
    int check = p->data;
    while(p->next != nullptr){
        if(check<p->next->data){
            p = p->next;
            check = p->data;
        }else{
            cout<<"List is not sorted"<<endl;
            return 0;
        }
    }

    return 1;
}

int main(){
    int a[5] = {1,2,3,4,5};
    Node* list = createLinkedList(a, 5);
    int checking = CheckSort(list);
    if(checking){
        cout<<"Well done list is sorted"<<endl;
    }
}