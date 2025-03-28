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
    
    head->val =150;
    first->val = 2;
    second->val = 13;
    third->val = 3;
    fourth->val = 8;
    fifth->val = 21;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    int nums[4] = {150,2,8,21}; // -1 -1
    ListNode* p = head;
    int pair = 0;

    for(int i = 0; i<4; i++){
        while(p->next && p->val!=nums[i]){
            p = p->next;
        }
        if((p->next && nums[i]!=-1)){
            ListNode* consec = new ListNode();
            consec = p->next;
    
            for(int j = 0; j<4; j++){
                if(consec->val == nums[j] && nums[j]!=-1){
                    pair++;
                    nums[j] = nums[i] = -1;
                }else{
                    if(nums[j]!=-1){

                        pair++;
                    }
                    nums[j] = -1;
                }
            }
            
            p=head;
        }
    }

    cout<<pair<<endl;
}