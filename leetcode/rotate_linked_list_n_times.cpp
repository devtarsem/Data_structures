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
    
    head->val =0;
    first->val = 1;
    second->val = 2;
    // third->val = 4;
    // fourth->val = 5;
    // fifth->val = 6;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = nullptr;
    // third->next = fourth;
    // fourth->next = fifth;
    fifth->next = nullptr;

    ListNode* p = head;
    ListNode* c = head;
    ListNode* h = nullptr;

    int count = 1;
    
    while(p->next){
        h=p;
        p = p->next;
        c = c->next;
    }
    p=head;

    int k = 4;
    if(k>count){
        if(k%count == 0){
            k = count;
        }else{
            k = k%count;
        }
    }
    for(int i = 0; i<k; i++){
        c->next = p;
        p = c;
        h->next = nullptr;
        while(c->next){
            if(c->next == h){
                h = c;
            }
            c = c->next;

        }
    }
    while(p){
        cout<<p->val<<endl;
        p = p->next;    
    }


}