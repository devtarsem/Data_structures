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
    
    
    head->val = 1;
    first->val = 2;
    second->val = 3;
    third->val = 4;
    fourth->val = 5;
    fifth->val = 6;
    six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    ListNode* p = head;
    ListNode* r = head;

    int count  = 0;
    while(p){
        p=p->next;
        count++;
    }
    p = head;
    int n = 2;
    int begin = count - n;

    for(int i = 0; i<n-1; i++){
        p = p->next;
    }
    for(int i = 0; i<begin; i++){
        r = r->next;
    }
    int temp = 0;
    temp = p->val;
    p->val = r->val;
    r->val = temp;
    
    
    while(head){
        cout<<head->val<<endl;
        head = head->next;
    }


}