#include<iostream>

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
    
    
    head->val = 1;
    first->val = 2;
    second->val = 4;
    head2->val = 1;

    third->val = 3;
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

    ListNode* final = new ListNode();
    ListNode* u = final;

    while(p || v){
        if(p->val>v->val){
            ListNode* add1 = new ListNode();
            add1->val = v->val;
            u->next = add1;
            u = u->next;
            v = v->next;
        }else if(p->val<v->val){
            ListNode* add1 = new ListNode();
            add1->val = p->val;
            u->next = add1;
            u = u->next;
            p = p->next;
        }else if (p->val==v->val){
            ListNode* add1 = new ListNode();
            add1->val = p->val;
            ListNode* add2 = new ListNode();
            add2->val = v->val;
            u->next = add1;
            u = u->next;
            u->next = add2;
            u = u->next;
            p = p->next;
            v = v->next;
        }else if(!p){
            while(v){
                ListNode* add1 = new ListNode();
                add1->val = v->val;
                u->next = add1;
                u = u->next;
                v = v->next;
            }

        }else if(!v){
            while(p){
                ListNode* add1 = new ListNode();
                add1->val = p->val;
                u->next = add1;
                u = u->next;
                p = p->next;
            }
        }
   
    }

    while(final){
        cout<<final->val<<endl;
        final = final->next;
    }

}