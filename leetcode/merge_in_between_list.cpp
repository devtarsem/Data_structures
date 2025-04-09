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
    first->val = 0;
    second->val = 1;
    third->val = 2;
    fourth->val = 3;
    fifth->val = 4;
    six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;


    ListNode* head1 = new ListNode();
    ListNode* first1 = new ListNode();
    ListNode* second1 = new ListNode();
    ListNode* third1 = new ListNode();
    ListNode* fourth1 = new ListNode();
    ListNode* fifth1 = new ListNode();
    ListNode* six1 = new ListNode();
    
    head1->val =21;
    first1->val = 22;
    second1->val = 23;
    third1->val = 24;
    fourth1->val = 25;
    fifth1->val = 26;
    six1->val = 27;

    head1->next = first1;
    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = six1;
    six1->next = nullptr;


    ListNode* v = head;
    ListNode* w = nullptr;

    ListNode* y = head;
    ListNode* z = y->next;

    int a = 2;
    int b = 4;

   for(int i = 0; i<a; i++){
        w=v;
        v=v->next;
   }

   for(int i=0; i<b; i++){
    y=y->next;
    z=y->next;
   }

   w->next = nullptr;
   y->next = nullptr;

   ListNode* sec = head1;
   ListNode* d = head1;

   while(sec->next){
    sec=sec->next;
   }

   w->next = d;
   sec->next = z;

   while(head){
    cout<<head->val<<endl;
    head=head->next;
   }



}