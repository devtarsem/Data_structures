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

    ListNode* p = head;
    ListNode* r = head->next;
    ListNode* s = nullptr;

    while(p->next){
        while(r){
            if(p->val < r->val){
                p = p->next;

                s->next = p;
                r=r->next;
            }else{
                r=r->next;
            }
        }

        if(!(r->next)){
            r=p->next;
        }else{
            s = p;
            p = p->next;
            if(p->next){
                r = p->next;
            }

        }


    }

    while(head){
        cout<<head->val<<endl;
        head=head->next;
    }


}