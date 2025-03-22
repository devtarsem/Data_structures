#include<iostream>

using namespace std;

struct Node{
    int data ;
    Node* next;
};



int main(){
    Node* head = new Node();
    head->data = 1;
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* six = new Node();


    first->data = 2;
    second->data = 3;
    third->data = 3;
    fourth->data = 3;
    fifth->data = 4;
    six->data = 4;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;


    Node* p = head;
    while(p && p->next){
        if(p->data == p->next->data){
            if(!(p->next->next)){
                p->next = nullptr;
            }else{
                p->next = p->next->next;
            }
        }else{
            if((p->next)){
                p = p->next;
            }
        }
    }
   

    p = head;


    while(p){
        cout<<p->data<<endl;
        p = p->next;
    }



}