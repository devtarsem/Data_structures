#include<iostream>

using namespace std;

struct ListNode{
    int val= 0;
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
    
    head->val =4;
    first->val = 2;
    second->val = 1;
    third->val = 3;
    fourth->val = 1;
    fifth->val = 5;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    fourth->next = nullptr;

    ListNode* p = head;
    ListNode* h = head;

    while(p->next){
        while(h->next){
            int temp = 0;
            h=h->next;
            if(p->val > h->val){
                temp = p->val;
                p->val = h->val;
                h->val = temp;
            }else{
                h=h->next;
            }
        }
        p=p->next;
        h=p;
    }

    p = head;

    while(p){
        cout<<p->val<<endl;
        p=p->next;
    }

}