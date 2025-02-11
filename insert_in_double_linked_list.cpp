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

Node* insertionInDoubleLinkedList(Node* head, int pos, int data){
    Node* s = head;
    Node* p = NULL;
    Node* runner = head;
    Node* insertionNode = new Node();
    insertionNode->data = data;
    int count = 1;
    while(runner->next != nullptr){
        count++;
        runner=runner->next;
    }    

    if(count == pos){
        runner->next = insertionNode;
        insertionNode->prev = runner;
        insertionNode->next = nullptr;
        return head;
    }

    if(pos==0){
        insertionNode->next = s;
        insertionNode->prev = nullptr;
        s = insertionNode;
        return s;
    }else{
        for(int i = 0; i<pos; i++){
            p = s;
            s=s->next;
        }
    
        insertionNode->next = s;
        insertionNode->prev = p;
        p->next = insertionNode;
        s->prev = insertionNode;
    }


    return head;

}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    Node* list = createDoublyLinkedList(a, 10);
    Node* updatedlist = insertionInDoubleLinkedList(list,10,101);
    printingLinkedList(updatedlist);
}