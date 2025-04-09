#include<iostream>
#include<Math.h>

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

    head->next = nullptr;
    first->next = second;
    second->next = nullptr;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    ListNode* p = head;
    int count = -1;
    while(p){
        count++;
        p=p->next;
    }
    int manipulator = pow(2, count);
    int sum = 0;
    p=head;
    while(p){
        if(p->val == 1){
            sum = sum+manipulator;
        }
        manipulator /= 2;
        p=p->next;
    }
    cout<<sum<<endl;

}