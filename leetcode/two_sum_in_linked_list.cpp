#include<iostream>
#include<math.h>

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
    first->val = 4;
    second->val = 3;
    third->val = 3;
    fourth->val = 1;
    fifth->val = 5;
    // six->val = 9;

    head->next = first;
    first->next = second;
    second->next = nullptr;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = nullptr;


    ListNode* head1 = new ListNode();
    ListNode* first1 = new ListNode();
    ListNode* second1 = new ListNode();
    ListNode* third1 = new ListNode();
    ListNode* fourth1 = new ListNode();
    ListNode* fifth1 = new ListNode();
    ListNode* six1 = new ListNode();
    
    head1->val =5;
    first1->val = 6;
    second1->val = 4;
    third1->val = 1;
    fourth1->val = 1;
    fifth1->val = 5;
    // six->val = 9;

    head1->next = first1;
    first1->next = second1;
    second1->next = nullptr;
    // third1->next = fourth1;
    // fourth1->next = nullptr;
    // fifth1->next = nullptr;

    int count1 = 0;
    int count2 = 0;
    int m1 = 1;
    int m2 = 1;
    ListNode* p =head;
    ListNode* k = head1;

    while(p){
        count1++;
        p = p->next;
    }
    while(k){
        count2++;
        k = k->next;
    }

    // if(count1==1 && count2==1){
    //     ListNode* h = new ListNode();
    //     h->val = head->val + head1->val;
    //     return h;
    // }

    p = head;
    k = head1;

    m1 = pow(10, count1-1);
    m2 = pow(10, count2-1);

    int sum1 = 0;
    int sum2 = 0;

    while(p){
        sum1 = sum1 + p->val*m1;
        m1 = m1/10;
        p=p->next;
    }

    

    while(k){
        sum2 = sum2 + k->val*m2;
        m2 = m2/10;
        k=k->next;
    }

    cout<<sum1<<endl;

    int reverseddigit1 = 0;

    while(sum1>0){
        int digit = sum1%10;
        reverseddigit1 = reverseddigit1*10 + digit;
        sum1/=10;
    }


    int reverseddigit2 = 0;

    while(sum2>0){
        int digit = sum2%10;
        reverseddigit2 = reverseddigit2*10 + digit;
        sum2/=10;
    }

    int fnalsum = reverseddigit1+reverseddigit2;

    
    ListNode* pro = new ListNode();
    ListNode* h = pro;


    while(fnalsum>0){
        int digit = fnalsum%10;
        ListNode* temp = new ListNode();
        temp->val = digit;
        h->next = temp;
        h=h->next;
        fnalsum /=10;
    }

    while(pro){
        cout<<pro->val<<endl;
        pro = pro->next;
    }

}