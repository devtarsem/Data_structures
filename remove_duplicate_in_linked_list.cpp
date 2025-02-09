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

Node* removeDuplicates(Node* head){
    Node* p = head;
    Node* s = p->next;

    while(s){
        if(p->data == s->data){
            p->next = s->next;
            delete s;
            s = p->next;
        }else{
            p = s;
            s=s->next;
        }
    }

    return head;
}

int main(){
    int a[17] = {1,2,2,3,3,4,4,4,4,4,4,4,4,4,4,4,45};
    Node* list = createLinkedList(a,17);
    Node* updatedList = removeDuplicates(list);
    printingLinkedList(updatedList);

}