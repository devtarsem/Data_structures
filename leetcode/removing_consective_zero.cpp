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
    second->val = -3;
    third->val = 3;
    fourth->val = 1;
    fifth->val = 5;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    ListNode* p = head;
    ListNode* r = nullptr;
    int count = 0;
    int thisIterate = 0;
    while(p){
        count++;
        p = p->next;
    }
    p=head;

    while(count!=thisIterate){
        if(p->next  ){
            if(p->val+p->next->val == 0){
                r->next = p->next;
                p = p->next;
                r->next = p->next;
                p = p->next;
                r = nullptr;
                p = head;
                count -=2;
                thisIterate = 0;
            }
        }else{
            r=p;
            if(p->next){
                p = p->next;

            }
            thisIterate++;
        }
    }

    while(head){
        cout<<head->val<<endl;
        head = head->next;
    }

}