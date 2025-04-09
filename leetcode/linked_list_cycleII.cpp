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
    
    head->val =1;
    first->val = 1;
    second->val = 1;
    third->val = 2;
    fourth->val = 3;
    fifth->val = 4;
    six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second;
    fifth->next = six;
    six->next = nullptr;

    ListNode* s = head;
    ListNode* t = head;

    while(s && s->next){
        t=t->next;
        s=s->next->next;
        if(s==t){
            break;
        }
    }
    if(!(s && s->next)) return nullptr;
    while(head!=t){
        head=head->next;
        t=t->next;
    }
    return head;

}