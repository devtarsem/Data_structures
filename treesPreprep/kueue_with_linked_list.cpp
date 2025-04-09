#include<iostream>

using namespace std;

struct Node{
    int val;
    Node* next;
};

struct kueue{
    Node* rear;
    Node* front;
    Node* k;
};

void InsertInKueue(kueue* z, int val){
    Node* temp = new Node();
    temp->val = val;
    if(!temp){
        cout<<"The linked list is full"<<endl;
    }else{
        if(!z->front){
            z->front = z->rear = temp;
        }else{
            z->rear->next = temp;
            z->rear = z->rear->next;
        }
    }
}


void deleteFromkueue(kueue* z){
    if(z->front == nullptr){
        cout<<"The kueue is empty";
    }else{
        Node* p = z->front;
        z->front = z->front->next;
        delete(p);
    }
}

int main(){
    kueue p;
    p.front = p.rear = nullptr;
    p.k = new Node();
    InsertInKueue(&p, 10);
    InsertInKueue(&p, 11);
    InsertInKueue(&p, 12);
    InsertInKueue(&p, 13);
    InsertInKueue(&p, 14);
    InsertInKueue(&p, 15);
    deleteFromkueue(&p);
    deleteFromkueue(&p);
    deleteFromkueue(&p);
    deleteFromkueue(&p);

    while(p.front){
        cout<<p.front->val<<endl;
        p.front = p.front->next;
    }
}