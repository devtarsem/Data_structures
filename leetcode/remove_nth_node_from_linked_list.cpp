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
    
    
    head->val = 0;
    first->val = 2;
    second->val = 3;
    third->val = 0;
    fourth->val = 5;
    fifth->val = 4;
    six->val = 0;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    ListNode* p = head;
    ListNode* r = nullptr;

    int count  = 0;
    while(p){
        p=p->next;
        count++;
    }
    int n = 2;
    int begin = count - n + 1;
    p = head;

    for(int i = 0; i<begin-1; i++){
        r = p;
        p = p->next;
    }

    r->next = p->next;
    p->next = nullptr;
    p = head;

    while(p){
        cout<<p->val<<endl;
        p=p->next;
    }

    cout<<p->val;
}