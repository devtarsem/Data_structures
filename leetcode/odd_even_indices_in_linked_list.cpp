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
    six->data = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    int count = 0;
    Node* p = head;
    while(p){
        p = p->next;
        count++;
    }

    p = head;

    int arrOdd[(count/2)+1];
    arrOdd[0] = head->data;
    int arrEven[count/2];

    for(int i = 1; i<(count/2)+1; i++){
        arrOdd[i] = p->next->next->data;
        p = p->next->next;
    }


    p = head->next;
    arrEven[0] = p->data;
    for(int i = 1; i<(count/2); i++){
        arrEven[i] = p->next->next->data;
        p = p->next->next;
    }

   Node* final = new Node();
   Node* y = final;
    final->data = arrOdd[0];
   for(int i = 1; i<(count/2) + 1; i++){
        Node* temp = new Node();
        temp->data = arrOdd[i];
        y->next = temp;
        y = y->next;
   }
   for(int i = 0; i<(count/2) ; i++){
    Node* temp = new Node();
    temp->data = arrEven[i];
    y->next = temp;
    y = y->next;
    }

    y = final;

    while(y){
        cout<<y->data<<endl;
        y = y->next;
    }




    
}