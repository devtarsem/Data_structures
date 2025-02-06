#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int search(Node* temp, int key, Node* head){
    Node *r = new Node();
    while(temp){
        if(temp->data==key){
            r->next = temp->next;
            temp->next = head;
            return 1;
        }
        r = temp;
        temp = temp->next;
    }

    return 0;
}

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    int keysearch = search(head,20,head);
    if(keysearch){
        cout<<"The key is found";
    }

}