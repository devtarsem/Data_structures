#include<iostream>
using namespace std;

struct kueue{
    int rear;
    int front;
    int size;
    int* k;
};

void addingInKueueCircularly(kueue* p, int val){
    if((p->rear+1)%p->size == p->front){
        cout<<"the kueue is full"<<endl;
    }else{
        p->rear = (p->rear+1)%p->size;
        p->k[p->rear] = val;
    }
}

void deletingKueueCircularly(kueue* p){
    if(p->front == p->rear){
        cout<<"the kueue is empty";
    }else{
        p->front  = (p->front+1)%p->size;
        p->k[p->front] = 0;
    }
}

void displayKueueCircular(kueue* p){
    for(int i = p->front+1; i<=p->rear; i++){
        cout<<p->k[i]<<endl;
    }
}

int main(){
    kueue* p = new kueue();
    p->size = 5;
    p->rear = p->front = 0;
    p->k = new int[p->size];

    addingInKueueCircularly(p, 5);
    addingInKueueCircularly(p, 10);
    addingInKueueCircularly(p, 15);
    addingInKueueCircularly(p, 20);
    deletingKueueCircularly(p);
    deletingKueueCircularly(p);


    displayKueueCircular(p);


}
