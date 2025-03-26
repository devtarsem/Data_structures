#include<iostream>
#include <unordered_set>
#include <vector>
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
    first->val = 2;
    second->val = 3;
    third->val = 1;
    fourth->val = 4;
    fifth->val = 6;
    six->val = 7;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    vector<int> nums = {1, 2, 3};
    unordered_set<int> numSet(nums.begin(), nums.end());
    ListNode* dummy = new ListNode(); // Dummy node for handling head deletion
    dummy->val = 0;
    dummy->next = head;
    ListNode* p = dummy;
    ListNode* c = head;

    while(c){
        if(numSet.count(c->val)){
            p->next = c->next;
        }else{
            p = c;
        }
        c = c->next;
    }

    while(dummy){
        cout<<dummy->val<<endl;
        dummy = dummy->next;
    }

    // int iteration = 0;
    // for(int i = 0; i<3; i++){
    //     while(p){
    //         if(nums[i] == p->val){
    //             iteration++;
    //             p = p->next;
    //         }else{
    //             p = p->next;

    //         }
    //     }
    //     p = head;
    //     while(iteration){
    //         if(p->val == nums[i]){
    //             if(p == head){
    //                 // u = p;
    //                 // p = p->next;
    //                 // u->next = nullptr;
    //                 head = p->next;
    //                 p = p->next;

    //                 iteration--;
    //             }else{
    //                 u->next = p->next;
    //                 // p->next = nullptr;
    //                 p = p->next;
    //                 iteration--;
    //             }
    //         }else{
    //             u = p;
    //             p = p->next;
    //         }
    //     }
    //     iteration = 0;
    //     p = head;
    //     u = nullptr;
    // }

    // p = head;
    // while(p){
    //     cout<<p->val<<endl;
    //     p = p->next;
    // }

}