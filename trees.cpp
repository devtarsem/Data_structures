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
    
    head->data = 1;
    first->data = 2;
    second->data = 3;

    head->next = first;
    first->next = second;
    second->next = nullptr;


    Node* head1 = new Node();
    Node* first2 = new Node();
    Node* second3 = new Node();
    
    head1->data = 5;
    first2->data = 6;
    second3->data = 7;

    head1->next = first2;
    first2->next = second3;
    second3->next = nullptr;

    Node* newNode = new Node();
    newNode->next = nullptr;
    while(head){
        if(head->data < head1->data){
            Node* temp = new Node();
            temp->data = head->data;
            // cout<<temp->data<<endl;
            newNode->next = temp;
            newNode = temp;
            // cout<<newNode->data<<endl;

            head = head->next;

        }else{
            Node* temp = new Node();
            temp->data = head1->data;
            newNode->next = temp;
            newNode = temp;

            head1 = head1->next;

        }
    }


    while(newNode){
        cout<<newNode->data<<endl;
    }
    
}