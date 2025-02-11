#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* createDoublyLinkedList(int a[], int size){
    Node* head = new Node();
    head->prev = nullptr;
    head->next = nullptr;
    Node* temp = head;

    for(int i = 0; i<size; i++){
        Node * t = new Node();
        temp->next = t;
        t->next = nullptr;
        t->prev = temp;
        t->data = a[i];
        temp = temp->next;
    }
    Node* final = head->next;
    return final;
}
void printingLinkedList(Node* head){
    while(head){
        cout<<head->data<<endl;
        head= head->next;
    }
}


Node* DeletingInDoubleLinkedList(Node* head, int pos){
    Node* h = head;
    Node* s = NULL;
    Node* p = NULL;
    Node* runner = head;

      

    for(int i = 0; i<pos; i++){
        p = s;
        s = h;
        h = h->next;
    }



    if(pos == 0){
        s = h;
        h = h->next;
        delete s;
        return h;
    }


    if(s->next == nullptr){
        delete s;
        return head;
    }
    p->next = h;
    h->prev = p;
    delete s;

    return head;

}

int main(){
    int A[10]  = {0,1,2,3,4,5,6,7,8,9};
    Node* list = createDoublyLinkedList(A, 10);
    Node* updatedlist = DeletingInDoubleLinkedList(list, 0);
    printingLinkedList(updatedlist);

}

