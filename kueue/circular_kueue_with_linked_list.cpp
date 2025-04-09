#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    private:
        Node* front;
        Node* rear;

    public:
        Queue(){
            front = rear = NULL;
        }

        void enqueue(int val){
            Node* newNode = new Node(val);
            if(rear == NULL){
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }

        void dequeue(){
            if(front == NULL){
                cout<<"list is empty";
                return;
            }
            Node* p = new Node(0);
            p->next = front;
            front = front->next;
            free(p);
            return;
        }
        void display() {
            Node* temp = front;
            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
};

int main(){
    Queue h;
    h.enqueue(10);
    h.enqueue(20);
    h.enqueue(30);
    h.dequeue();
    h.dequeue();
    h.dequeue();
    h.dequeue();

    h.display();
}