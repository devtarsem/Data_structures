#include<iostream>
#include<vector>
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
    
    head->val =2;
    first->val = 7;
    second->val = 4;
    third->val = 3;
    fourth->val = 5;
    fifth->val = 1;
    six->val = 2;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;
    fifth->next = six;
    six->next = nullptr;

    vector<int> greaterNode;
    ListNode* p = head;
    ListNode* r = p->next;

    while(p && p->next){
        while(r){
            if(p->val < r->val){
                // count = r->val;
                greaterNode.push_back(r->val);
                p=p->next;
                r=p->next;
            }else{
                r=r->next;
            }
        }
        p=p->next;
        r=p->next;
        greaterNode.push_back(0);
        
    }
    greaterNode.push_back(0);


    for(int i=0; i<greaterNode.size(); i++){
        cout<<greaterNode[i]<<endl;
    }
}