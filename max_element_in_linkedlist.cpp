#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int maxInLinkedList(Node* temp){
    int max = 0;
    while(temp){
        if(max<temp->data){
            max = temp->data;
            temp = temp->next;
        }else{
            temp = temp->next;
        }
    }

    return max;
}

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    first->data = 50;
    second->data = 40;
    third->data = 90;

    head->next = first;
    head->next = second;
    second->next = third;
    third->next = nullptr;

    int maxval = maxInLinkedList(head);
    cout<<"The maximum value in linked list is :- "<<maxval<<endl;

}