#include<iostream>
#include<vector>

using namespace std;

struct Node{
    int val ;
    Node* next;
};


void searchInHashtable(Node *arr[], int key){
    int hash = key%10;
    Node* s = arr[hash];
    int p = 1;
    while(s != nullptr){
        if(s->val == key){
            cout<<"Congratulations the key --> "<<key<<" is founded"<<endl;
            break;
            p = 0;
        }else{
            s = s->next;
        }
        
    }
    if(p){
        cout<<"OOPS the key --> "<<key<<" is not found"<<endl;
    }
}

int main(){
    vector<int> p = {75,41,89,63,45,10,12,11,28,44,77,88,22};

    Node *arr[10] = {nullptr};


    for(int i = 0; i<p.size(); i++){
        int hashFun = p[i]%10;
        Node* temp = new Node();
        temp->val = p[i];
        temp->next = nullptr;

        if(arr[hashFun] == nullptr){
            arr[hashFun] = temp;
        }else{
            Node* s = arr[hashFun];
            while(s->next != nullptr) {
                s = s->next;
            }
            s->next = temp;

        }

    }

    searchInHashtable(arr, 12885754);

    for(int i = 0; i<10; i++){
       Node * curr = arr[i];
       while(curr != nullptr){
        cout<<curr->val<< "->";
        curr = curr->next;
       }
       cout<<" /"<<endl;
    }

}