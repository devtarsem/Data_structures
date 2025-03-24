#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

int main(){
    ListNode* head = new ListNode();
    ListNode* first = new ListNode();
    ListNode* second = new ListNode();
    ListNode* third = new ListNode();
    ListNode* fourth = new ListNode();
    ListNode* fifth = new ListNode();
    ListNode* six = new ListNode();
    
    
    head->val = 1;
    first->val = 2;
    second->val = 3;
    third->val = 4;
    fourth->val = 5;
    fifth->val = 6;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    ListNode* p = head;
    ListNode* c = NULL;

    int count = 0;
    while(p){
        count++;
        p = p->next;
        
    }
    p = head;

    for(int i = 0; i<count/2; i++){
        c = p;
        p =p->next;
    }

    c->next = p->next;
    p->next = nullptr;


    while(head){
        cout<<head->val<<endl;
        head = head->next;
    }

}