#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

int main(){
    Node* head1 = new Node();
    Node* head2 = new Node();
    Node* head3 = new Node();
    Node* a1 = new Node();
    Node* b1 = new Node();
    Node* c1 = new Node();
    Node* a2 = new Node();
    Node* b2 = new Node();
    Node* c2 = new Node();
    Node* a3 = new Node();
    Node* b3 = new Node();
    Node* c3 = new Node();

    head1->val = 1;
    head2->val = 9;
    head3->val = 21;

    a1->val = 5;
    a2->val = 10;
    a3->val = 22;
    b1->val = 3;
    b2->val =9;
    b3->val = 23;
    c1->val = 4;
    c2->val = 12;
    c3->val = 24;

    head1->next = a1;
    a1->next = b1;
    b1->next = c1;
    c1->next = nullptr;

    head2->next = a2;
    a2->next = b2;
    b2->next = c2;
    c2->next = nullptr;

    head3->next = a3;
    a3->next = b3;
    b3->next = c3;
    c3->next = nullptr;

    // Node* arr[3] = {head1, head2, head3};
    Node* arr[3] = {nullptr, nullptr, nullptr};

    int count = 0;
    for(int i = 0; i<3; i++){
        Node* p = arr[i];
        while(p){
            count++;
            p=p->next;
        }
    }
    cout<<count<<endl;

    int arrp[count];
    int iteration = 0;
    for(int i = 0; i<3; i++){
        Node* p = arr[i];
        while(p){
            arrp[iteration] = p->val;
            p = p->next;
            iteration++;
        }
    }
   
    // sort the array
    for(int i = 0; i<count; i++){
        for(int j = 0; j<count; j++){
            if(arrp[j] > arrp[j+1]){
                swap(arrp[j], arrp[j+1] );
            }
        }
    }


    Node* final = new Node();
    final->next = nullptr;
    Node* y = final;

    for(int i = 0; i<count; i++){
        Node* temp = new Node();
        temp->val = arrp[i];
        y->next = temp;
        y = y->next;
    }
    for(int i = 0; i<count; i++){
        cout<<arrp[i]<<endl;

    }
    y = final->next;

    // while(y){
    //     cout<<y->val<<endl;
    //     y = y->next;
    // }

}