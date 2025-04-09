#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

struct kueue{
    ListNode* rear;
    ListNode* front;
    ListNode* p;
};

void AddingInKueue(kueue* p, int val){
    ListNode* temp = new ListNode();
    if(p->front == nullptr){
        temp->val = val;
        p->rear = temp;
        p->front = temp;

    }else{
        temp->val = val;
        p->rear->next = temp;
        p->rear = p->rear->next;
    }
}

void deletingInKueue(kueue* r){
    ListNode* w = new ListNode();
    if(r->front == nullptr){
        cout<<"the kueue is empty"<<endl;
    }else{
        w = r->front;
        r->front = r->front->next;
        w->next = nullptr;
    }
}

void DisplayLinkedList(kueue* p){
    while(p->front){
        cout<<p->front->val<<endl;
        p->front = p->front->next;
    }
}

void isEmpty(kueue* p){
    if(p->front == nullptr){
        cout<<"The Kueue is empty"<<endl;
    }else{
        cout<<"The Kueue is not empty yet"<<endl;

    }
}

int main(){
    kueue* z = new kueue();
    z->rear = nullptr;
    z->front = nullptr;
    z->p = new ListNode();

    AddingInKueue(z, 5);
    AddingInKueue(z, 15);
    AddingInKueue(z, 25);
    AddingInKueue(z, 35);
    AddingInKueue(z, 45);

    deletingInKueue(z);
    deletingInKueue(z);
    deletingInKueue(z);
    deletingInKueue(z);
    deletingInKueue(z);



    DisplayLinkedList(z);
    isEmpty(z);

}