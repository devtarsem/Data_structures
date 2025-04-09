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
    
    head->val =2;
    first->val = 7;
    second->val = 4;
    third->val = 3;
    fourth->val = 5;
    fifth->val = 1;
    six->val = 2;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    ListNode* p = head;
    ListNode* s = nullptr;
    ListNode* r =p->next;

    while(p && p->next){
        while(r){
            if(p->val < r->val){
                if(p==head){
                    head = p->next;
                    p=p->next;
                    r=p->next;
                }else{
                    s->next=p->next;
                    p=p->next;
                    r=p->next;
                }
            }else{
                r=r->next;
            }
        }

        s=p;
        p=p->next;
        if(!p){
            r=nullptr;

        }else{
            r=p->next;
        }
    }

}