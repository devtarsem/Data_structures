#include<iostream>
using namespace std;
#include<vector>

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
    
    head->val =5;
    first->val = 3;
    second->val = 1;
    third->val = 2;
    fourth->val = 5;
    fifth->val = 1;
    six->val = 2;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = nullptr;

    vector<int> minVector;
    vector<int> maxVector;

    ListNode* p = head;
    ListNode* iterator = p->next;
    ListNode* prev  = p;
    int counter = 2;

    while(iterator->next){
        // maxima points
        if(iterator->val>prev->val && iterator->val>iterator->next->val){
            maxVector.push_back(counter);
        }else if(iterator->val<prev->val && iterator->val<iterator->next->val){
            maxVector.push_back(counter);
        }
        prev = iterator;
        iterator = iterator->next;
        counter++;
    }
    
    vector<int> final;
    if(maxVector.size()==0){
        final.push_back(-1);
        final.push_back(-1);
        return final;
    }

    int min = maxVector[0];
    int max = maxVector[maxVector.size()-1];
    int sexmax = maxVector[maxVector.size()-2];

    final.push_back(max-sexmax);
    final.push_back(max-min);



}