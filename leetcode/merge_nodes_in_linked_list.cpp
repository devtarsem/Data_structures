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
    ListNode* t = head;
    ListNode* final = new ListNode();
    ListNode* u = final;
    final->next = nullptr;
    int sum = 0;

    while(t){
        if(p->val==0 && t->val==0 && t != head){
            ListNode* temp = new ListNode();
            temp->val = sum;
            u->next = temp;
            u = u->next;
            sum = 0;
            p = t;
            t=t->next;

        }else{
            sum = sum + t->val;
            t = t->next;
        }
    }
    u = final;
    while(u){
        cout<<u->val<<endl;
        u = u->next;
    }

}