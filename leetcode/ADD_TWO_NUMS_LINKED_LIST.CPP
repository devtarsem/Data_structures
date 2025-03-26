#include<iostream>
#include <cmath>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

int main(){

    ListNode* head = new ListNode();
    ListNode* head2 = new ListNode();

    ListNode* first = new ListNode();
    ListNode* second = new ListNode();
    ListNode* third = new ListNode();
    ListNode* fourth = new ListNode();
    ListNode* fifth = new ListNode();
    ListNode* six = new ListNode();
    
    
    head->val = 2;
    first->val = 4;
    second->val = 3;
    head2->val = 5;

    third->val = 6;
    fourth->val = 4;
    // fifth->val = 6;
    // six->val = 7;

    head->next = first;
    first->next = second;
    second->next = nullptr;
    head2->next = third;
    third->next = fourth;
    fourth->next = nullptr;
    // fifth->next = nullptr;

    ListNode* p = head;
    ListNode* v = head2;

    ListNode* prev1 = nullptr;
    ListNode* current1 = p;
    ListNode* next1 = nullptr;

    while (current1) {
        next1 = current1->next;  // Store next node
        current1->next = prev1;  // Reverse the link
        prev1 = current1;        // Move prev to current
        current1 = next1;        // Move current to next
    }

    p = prev1;

    ListNode* prev2 = nullptr;
    ListNode* current2 = v;
    ListNode* next2 = nullptr;

    while (current2) {
        next2 = current2->next;  // Store next node
        current2->next = prev2;  // Reverse the link
        prev2 = current2;        // Move prev to current
        current2 = next2;        // Move current to next
    }

    v = prev2;



    int countP = 0;
    int countV = 0;

    int pManipulator = 1;
    int vManipulator = 1;
    while(p || v){
        if(p){
            countP++;
            p = p->next;
        }

        if(v){
            countV++;
            v = v->next;
        }
    }

    p = head;
    v = head2;

    pManipulator = pow(10, countP-1);
    vManipulator = pow(10, countV-1);


    int sumP = 0;
    int sumV = 0;
    while(p || v){
        if(p){
            sumP = sumP + p->val*pManipulator;
            p = p->next;
            pManipulator = pManipulator/10;
        }

        if(v){
            sumV = sumV + v->val*vManipulator;
            v = v->next;
            vManipulator = vManipulator/10;
        }
    }
    ListNode* final = new ListNode();

    ListNode* u = final;
    int num = (sumP+sumV);
    while(num>0){
        int digit = num%10;
        ListNode* temp = new ListNode();
        temp->val = digit;
        u->next = temp;
        u = u->next;
        num/=10;
    }
    final = final->next;
    while(final){
        cout<<final->val<<endl;
        final = final->next;
    }



}