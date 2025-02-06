#include<iostream>
using namespace std;

struct Node{
    string data;
    Node* next;
};

int search(Node* temp, string name){
    while(temp){
        cout<<temp->data<<endl;
        cout<<name<<endl;

        if(temp->data == name){
            return 1;
        }else{
            temp = temp->next;
        }
    }

    return 0;
}

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 'tarsem';
    first->data = 'suresh';
    second->data = 'jagjit';
    third->data = 'punit';

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    string firstName;
    cout << "Type your search name: "<<endl;
    cin >> firstName; // get user input from the keyboard
    cout << "Your search name is: " << firstName <<"Let me check is his available in database or not"<<endl;
    int searchval = search(head, firstName);

    // if(searchval){
    //     cout << "Your search name : " << firstName <<"is available in our database"<<endl;
    // }else{
    //     cout << "Your search name : " << firstName <<"is not available in our database"<<endl;

    // }

    return 0;
}