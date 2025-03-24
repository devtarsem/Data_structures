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
    first->val = 4;
    second->val = 3;
    third->val = 2;
    fourth->val = 5;
    fifth->val = 2;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    ListNode* p = head;
    int arrcount = 0;
    while(p){
        arrcount++;
        p=p->next;
    }

    int arr[arrcount];
    int x = 3;
    int start = 0;
    p = head;
    int filled = 0; //1

    for(int i = 0; i<arrcount; i++){
        if(p->val  <  x){
            arr[filled] = p->val;
            filled++;
        }
        p = p->next;
    }
    p = head;

    for(int i = 0; i<arrcount; i++){
        if(p->val  >=  x){
            arr[filled] = p->val;
            filled++;
        }
        p = p->next;
    }

    ListNode* final = new ListNode();
    
    ListNode* w = final;
    w->next = nullptr;

    for(int i = 0; i<arrcount; i++){
        ListNode* temp = new ListNode();
        temp->val = arr[i];
        temp->next = nullptr;
        w->next = temp;
        w = w->next;
    }
    w = final;

    while(w){
        cout<<w->val<<endl;
        w = w->next;
    }

}

