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


Node* inserNodes(Node* head, int pos, int data){
    Node* p = head;
    Node* insertingNode = new Node();
    insertingNode->data = data;

    

    if(pos==0){
        insertingNode->next = p;
        p = insertingNode;
        return p;
    }else{
        for(int i = 1; i<pos; i++){
            p = p->next;
        }
        insertingNode->next = p->next;
        p->next = insertingNode;
        return head;
    }

}

int main(){
    int A[5] = {1,2,3,4,6};
    Node* newList = createLinkedList(A,5);
    // printingLinkedList(newList);
    Node* updatedList = inserNodes(newList, 1, 45);
    for(int i = 0; i<6; i++){
        cout<<updatedList->data<<endl;
        updatedList = updatedList->next;
    }
}