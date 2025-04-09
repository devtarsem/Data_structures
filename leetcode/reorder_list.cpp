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
    fourth->val = 1;
    fifth->val = 5;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    // fourth->next = nullptr;
    // fifth->next = nullptr;

    int count = 0;
    ListNode* p = head;
    
    while(p){
        count++;
        p = p->next;
    }
    p = head;
    ListNode* reverseList = new ListNode();
    ListNode* u = reverseList;

    for(int i = count-1; i>=0; i--){
        for(int j = 0; j<i; j++){
            p = p->next;
        }
        ListNode* temp = new ListNode();
        temp->val = p->val;
        u->next = temp;
        u = u->next;
        p = head;
    }

    u = reverseList;

    ListNode* reOrderList = new ListNode();
    ListNode* v = reOrderList;

    if(count%2==0){
        for(int i = 0; i<count/2; i++){
            ListNode* temp1 = new ListNode();
            ListNode* temp2 = new ListNode();
            temp1->val = p->val;
            temp2->val = u->next->val;
            v->next = temp1;
            v = v->next;
            v->next = temp2;
            v = v->next;
            p=p->next;
            u=u->next;
        }

    }else{
        for(int i = 0; i<(count/2)+1; i++){
            if(i == count/2){
                ListNode* temp1 = new ListNode();
                temp1->val = p->val;
                v->next = temp1;
                v = v->next;
            }else{
                ListNode* temp1 = new ListNode();
                ListNode* temp2 = new ListNode();
                temp1->val = p->val;
                temp2->val = u->next->val;
                v->next = temp1;
                v = v->next;
                v->next = temp2;
                v = v->next;
                p=p->next;
                u=u->next;
            }
        }
    }

    v = reOrderList->next;

    while(v){
        cout<<v->val<<endl;
        v = v->next;
    }

}