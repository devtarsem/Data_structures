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
    // Node* fourth = new Node();
    // Node* fifth = new Node();
    // Node* six = new Node();
    
    
    head->data = 1;
    first->data = 2;
    second->data = 3;
    third->data = 4;
    // fourth->data = 5;
    // fifth->data = 6;
    // six->data = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    // fourth->next = fifth;
    // fifth->next = nullptr;

    Node* p = head;
    Node* r = head->next;
    int count = 0;
    while(p){
        p = p->next;
        count++;
    }

    int arr[count+1];
    p = head;

    for(int i = 0; i<count; i++){
        arr[i] = 
    }

    


}