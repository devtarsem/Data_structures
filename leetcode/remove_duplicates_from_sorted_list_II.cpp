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
    first->val = 1;
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


    ListNode* p = head;
    ListNode* r = new ListNode();
    int temp = 101;

    while(p && p->next){
        if(temp==p->val){
            if(p==head){
                if(p->next){
                    head = p->next;
                    p=p->next;
                }else{
                    return nullptr;
                }
            }else{
                if(p->next){
                    r->next = p->next;
                    p=p->next;
                }else{
                    r->next = nullptr;
                }
            }
        }else{
            temp = 101;
        }

        if(p->val == p->next->val){
            if(p == head){
                temp=p->val;
                head = p->next->next;
                p=p->next->next;
            }else{
                temp = p->val;
                r->next = p->next->next;
                p=p->next->next;
            }

        }else{
            r=p;
            p=p->next;
        }
    }

    p = head;
    // if(!(p->next)){
    //     return nullptr;
    // }
    while(p){
        cout<<p->val<<endl;
        p=p->next;
    }

}