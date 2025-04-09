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
    first->val = 2;
    second->val = 3;
    third->val = 4;
    fourth->val = 1;
    fifth->val = 5;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    ListNode* p = head;
    ListNode* h = head;
    ListNode* r = nullptr;
    while(h->next){
        ListNode* temp = new ListNode();
        while(h->next){
            r=h;
            h=h->next;
        }
        cout<<r->val;
        cout<<h->val;

        temp->val = h->val;
        p->next = temp;
        temp->next = p->next->next;
        p=p->next->next;
        r->next = nullptr;
        r=nullptr;
        // free(h);
        h = p;
    }
    p=head;

    while(p){
        cout<<p->val<<endl;
        p=p->next;
    }

}