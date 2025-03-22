#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* six = new Node();
    
    
    head->data = 1;
    first->data = 2;
    second->data = 3;
    third->data = 4;
    fourth->data = 5;
    fifth->data = 6;
    // six->data = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;
    // six->next = nullptr;

    Node* p = head;
    int count = 0;
    while(p){
        p = p->next;
        count++;
    }
    p = head;
    int mid = 0;
    for(int i = 1; i<(count/2)+1; i++){
        p = p->next;
        mid = p->data;
    }
    while(p){
        cout<<p->data<<endl;
        p = p->next;
    }
}