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
    fourth->val = 5;
    fifth->val = 21;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;
    // six->next = nullptr;


    ListNode* p = head;

    int count =0;
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


    final = final->next;
    p = head;
   
    int sum = 0;
    for(int i = 0; i<count/2; i++){
        int prepsum = p->val + final->val;
        if(sum<prepsum){
            sum = prepsum;
        }
        p = p->next;
        final=final->next;
    }

    cout<<sum;

}