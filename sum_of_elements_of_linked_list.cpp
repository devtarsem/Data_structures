#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int sumOfnodeElements(Node* temp){
    int count = 0;
    
    while(temp->next != nullptr){
        count = count + temp->data;
        temp = temp->next;
    }
    if(temp->next== nullptr){
        count= count + temp->data;
    }
    return count;
}

int main() {
    Node* head = new Node();
    Node* first = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    
    head->data = 1;
    first->data = 2;
    third->data = 3;
    fourth->data = 4;
    
    head->next = first;
    first->next = third;
    third->next = fourth;
    fourth->next = nullptr;
    
    int sum = sumOfnodeElements(head);
    cout << "The sum of all the nodes in Linked list is "<<sum<<endl;
  

    return 0;
}
