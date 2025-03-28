#include<iostream>

using namespace std;

struct MyLinkedList{
    int val;
    MyLinkedList* next;
};


int get(int index, MyLinkedList* p){
    MyLinkedList* s = p;
    int count = 0;
    while(s){
        count++;
        s=s->next;
    }
    if(count <= index){
        return 0;
    }
    s = p;
    for(int i =0; i<index; i++){
        s=s->next;
    }
    return s->val;

}

MyLinkedList* addAtHead(int val, MyLinkedList* p){
    MyLinkedList* s = p;
    
    MyLinkedList* h = new MyLinkedList();
    h->val = val;
    h->next = s;
    return  h;
}

MyLinkedList* addAtTail(int val, MyLinkedList* p){
    MyLinkedList* s = p;
    MyLinkedList* h = new MyLinkedList();
    h->val = val;
    while(s){
        s=s->next;
    }
    s->next = h;
    return  p;
}

MyLinkedList* addAtIndex(int index, int val, MyLinkedList* p){
    MyLinkedList* s = p;
    MyLinkedList* v = nullptr;

    MyLinkedList* h = new MyLinkedList();
    int count = 0;
    while(s){
        count++;
        s=s->next;
    }
    if(count < index){
        return p;
    }
    s=p;
    h->val = val;
    for(int i = 0; i<index; i++){
        v=s;
        s = s->next;
    }
    v->next = h;
    h->next = s
    return  p;
}

MyLinkedList* deleteAtIndex(int index, MyLinkedList* p){
    MyLinkedList* s = p;
    MyLinkedList* v = nullptr;
    int count = 0;
    while(s){
        count++;
        s=s->next;
    }
    if(count < index){
        return p;
    }
    s=p;
   
    for(int i = 0; i<index; i++){
        v=s;
        s = s->next;
    }
    v->next = s->next;
    return  p;
}


int main(){
    MyLinkedList* head = new MyLinkedList();
    MyLinkedList* first = new MyLinkedList();
    MyLinkedList* second = new MyLinkedList();
    MyLinkedList* third = new MyLinkedList();
    MyLinkedList* fourth = new MyLinkedList();
    MyLinkedList* fifth = new MyLinkedList();
    MyLinkedList* six = new MyLinkedList();
    
    head->val =150;
    first->val = 2;
    second->val = 13;
    third->val = 3;
    fourth->val = 8;
    fifth->val = 21;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    MyLinkedList* p = head;
    

    int getatindex = get(25, head);
    cout<<getatindex<<endl;
}