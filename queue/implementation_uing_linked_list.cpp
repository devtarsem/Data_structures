#include<iostream>

using namespace std;


struct Node{
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;

Node* addingElementInQueue(int element){
    Node* temp = new Node();
    temp->data = element;
    temp->next = nullptr;
    if(front == NULL){
        front = rear = temp;
        return front;
    }else{
        rear->next = temp;
        rear = temp;
        return front;
    }
}

Node* deleteElementInQueue(){
    Node* p = new Node();
    if(front == NULL){
        cout<<"Empty Queue"<<endl;
        return front;
    }else{
        p = front;
        front = front->next;
        delete p;
        return front;
    }
}

void printingLinkedQueue(Node* head){
    Node* list = head;
    while(list){
        cout<<list->data<<endl;
        list = list->next;
    }
        
}

int main(){
    addingElementInQueue(8);
    addingElementInQueue(9);
    addingElementInQueue(10);
    addingElementInQueue(11);
    addingElementInQueue(13);
    addingElementInQueue(14);
    addingElementInQueue(15);
    cout<<"Result of addition"<<endl;
    printingLinkedQueue(addingElementInQueue(16));
    
    deleteElementInQueue();
    deleteElementInQueue();
    cout<<"Result of deletion"<<endl;
    
    printingLinkedQueue(deleteElementInQueue());

}