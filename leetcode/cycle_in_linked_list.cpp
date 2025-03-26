#include<iostream>

using namespace std;


struct ListNode{
    int val ;
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
    
    head->val =0;
    first->val = 1;
    second->val = 2;
    third->val = 4;
    // fourth->val = 5;
    // fifth->val = 6;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = second;
    // fourth->next = fifth;
    // fifth->next = nullptr;

    ListNode* p = head;
    ListNode* s = nullptr;

    while(p){
        if(s->next != p){
            return true;
        }else{
            s = p;
            p = p->next;
        }
        return false;
    }

}
