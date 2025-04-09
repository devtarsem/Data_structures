#include<iostream>

using namespace std;

struct kueue{
    int size;
    int front;
    int rear;
    int* k;
};

int main(){
    kueue* p = new kueue();
    p->size = 5;
    p->k = new int [p->size] ;
    p->front = p->rear = 0;

    // insertion in circular kueue
    for(int i = 0; i<5; i++){
        if((p->rear+1)%p->size == p->front){
            cout<<"kueue is full bugge";
        }else{
            p->rear++;
            p->k[p->rear] = i+1;
            cout<<"Added"<<endl;
        }
    }

    // deletion in circular kueue
    for(int i = 0; i<5; i++){
        if(p->front == p->rear){
            cout<<"the kueue is empty bugge";
        }else{
            p->front++;
            p->k[p->front] = 0;
            cout<<"deleted"<<endl;

        }
    }
}