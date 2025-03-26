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
    
    
    head->val = 18;
    first->val = 6;
    second->val = 10;
    third->val = 3;
    fourth->val = 19;
    fifth->val = 21;
    six->val = 28;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    int arr[8] = {2,3,4,5,6,7,8,9};

    ListNode* p = head->next;
    ListNode* r = head;
    int maxDivisor = 1;

    while(p){
        for(int i = 0; i<8; i++){
            if(p->val%arr[i]==0 && r->val%arr[i]==0){
                maxDivisor = arr[i];
            }
        }
        ListNode* temp = new ListNode();
        temp->val = maxDivisor;
        r->next = temp;
        temp->next = p;
        p = p->next;
        r = r->next->next;
        maxDivisor = 1;
    }

    p = head;

    while(p){
        cout<<p->val<<endl;
        p = p->next;
    }

    
}