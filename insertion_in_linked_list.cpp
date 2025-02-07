#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertion(int pos, Node* head, Node* first){
    Node* p = head;
    Node* t = new Node();
    t->data = 100;

    if(pos==0){
        t->next = first->next;
        first->next = t;
    }else{
        for(int i=1; i<pos; i++){
            p = p->next;
        }
    
        t->next = p->next;
        p->next = t;
    }


    Node* list = first->next;

    for(int i = 0; i<6; i++){
        cout<<list->data<<endl;
        list = list->next;
    }


}

int main(){
    Node* head = new Node();
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();
    Node* four = new Node();

    head->data = 10;
    one->data = 20;
    two->data = 30;
    three->data = 40;
    four->data = 50;

    head->next = one;
    one->next = two;
    two->next = three;   
    three->next = four;
    four->next = nullptr;

    insertion(4, one, head);

    return 0;


}