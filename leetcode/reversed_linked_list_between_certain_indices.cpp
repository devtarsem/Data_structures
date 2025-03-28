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
    
    head->val =0;
    first->val = 1;
    second->val = 2;
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

    int leftval = 2;
    int rightval = 6;


    ListNode* p = head;

    ListNode* left = p;
    ListNode* right = nullptr;
    int count = 0;
    int before=0;
    int after=0;

    while(p->val != leftval){
        p = p->next;
        left = p;
        before++;
        after++; // 1
    }

    while(p->val != rightval){
        p = p->next;
        right = p;
        after++;

    }
    p=head;
    while(p){
        p = p->next;
        count++;
    }

    after = count - after - 1;

    int* arrleft = new int[before];
    int* arrright = new int[after];
    int* arrmiddle = new int[count-after-before];
    ListNode* mid = new ListNode();
    ListNode* h = mid;
    for(int i = 0; i<count-after-before; i++){
        arrmiddle[i] = left->val;
        left= left->next;
    }
    for(int i = count-after-before-1; i>-1; i--){
        // arrpRev[i] = arrp[count-i-1];
        ListNode* temp = new ListNode();
        temp->val = arrmiddle[i];
        h->next = temp;
        h = h->next;
    }

 
    
    p = head;

    ListNode* bef = new ListNode();
    ListNode* b = bef;
    ListNode* aft = new ListNode();
    ListNode* a = aft;

    

    for(int i=0; i<before; i++){
        ListNode* temp = new ListNode();
        // arrleft[i] = p->val;
        temp->val =  p->val;
        b->next = temp;
        b=b->next;
        p=p->next;
    }
  
    
    p = head;
    for(int i=0; i<after; i++){
        // arrright[i] = right->next->val;
        ListNode* temp = new ListNode();
        temp->val =   right->next->val;
        // arrleft[i] = p->val;
        a->next = temp;
        a=a->next;
        right = right->next;
    }

   
    left = mid;
    while(left){
        right =left;
        left = left->next;
    }
    left = mid;

    ListNode* beforetr = new ListNode();
    ListNode* l = bef;
    while(l){
        beforetr = l;
        l=l->next;
    }

    left = left->next;
    beforetr->next = left;

    aft = aft->next;

    right->next = aft;

    bef  = bef->next;
    while(bef){
        cout<<bef->val<<endl;
        bef = bef->next;
    }
    

}