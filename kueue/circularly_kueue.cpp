#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

struct kueue{
    Node* rear;
    Node* front;
    int size;
    Node* p;
};

bool enQueue(kueue* z ,int value){
    Node* temp = new Node();
    if(!temp){
        return false;
    }

    temp->val = value;
    if(z->front == nullptr){
        z->front = z->rear = temp;
        z->p = temp;
        z->rear->next = z->front;
    }else{
        z->rear->next = temp;
        z->rear = z->rear->next;
        z->rear->next = z->front;
    }
}

bool deQueue(kueue* z){
    if(z->front == nullptr){
        return false;
    }else{
        Node* temp = z->front;
        z->front = z->front->next;
        z->rear->next = z->front; 
        temp->next = nullptr;
        // free(temp);
        delete temp;
        return true;
    }
    
}

void displayKueue(kueue* z){
    Node* temp = z->front; // Temporary pointer to avoid modifying front
    do {
        cout << temp->val << endl;
        temp = temp->next;
    } while (temp != z->front);
}

int main(){
    kueue* z = new kueue();
    z->front = z->rear = nullptr;
    z->p = new Node();
    enQueue(z, 10);
    enQueue(z, 10);
    enQueue(z, 10);
    enQueue(z, 10);
    deQueue(z);
    displayKueue(z);
}