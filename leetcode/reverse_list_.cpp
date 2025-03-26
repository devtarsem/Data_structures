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
    third->val = 4;
    // fourth->val = 5;
    // fifth->val = 6;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    ListNode* p = head;

    int count = 0;
    while(p){
        count++;
        p = p->next;
    }
    p = head;
    int* arrp = new int[count];
    for(int i = 0; i<count; i++){
        arrp[i] = p->val;
        p = p->next;
    }
  
    // int* arrpRev = new int[count];
    ListNode* final = new ListNode();
    ListNode* h =final;

    for(int i = count-1; i>-1; i--){
        // arrpRev[i] = arrp[count-i-1];
        ListNode* temp = new ListNode();
        temp->val = arrp[i];
        h->next = temp;
        h = h->next;
        
    }

   while(final){
    cout<<final->val<<endl;
    final = final->next;
   }

}