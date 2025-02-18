#include<iostream>

using namespace std;

struct stack{
    int data;
    stack* next;
};

void printingStack(stack* s1){
    while(s1){
        cout<<s1->data<<endl;
        s1 = s1->next;
    }
}

stack* pushElementInStack(stack* s1, int element){
    stack* newNode = new stack();
    newNode->data = element;
    stack* top = s1;

    newNode->next = top;
    top = newNode;

    return top;
}

stack* popFromTheStack(stack* s1){
    stack* top = s1;
    stack* first = s1;
    top = top->next;
    delete first;
    return top;
}

int main(){
    stack* s1 = new stack();
    stack* s2 = new stack();
    stack* s3 = new stack();
    stack* s4 = new stack();

    s1->data = 4;
    s2->data = 3;
    s3->data = 2;
    s4->data = 1;

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = nullptr;

    stack* updatedlist = pushElementInStack(s1, 5);

    stack* popedList = popFromTheStack(updatedlist);
    printingStack(popedList);

}