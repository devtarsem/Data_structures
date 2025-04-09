#include<iostream>
using namespace std;

struct kueue{
    int front;
    int rear;
    int size ;
    int *k;
};

struct circularKueue{
    int front;
    int rear;
    int size;
    int *v;
};

void removingInCircularKueue(circularKueue* p){
    if(p->rear == p->front){
        cout<<"the kueue is empty sir";
    }else{
        p->front++;
        p->v[p->front] = 0;
    }
}

void addingInCircularKueue(circularKueue* z, int val){
    if((z->rear+1)%z->size == z->front){
        cout<<"the kueue is full sir"<<endl;
    }else{
        z->rear++;
        z->v[z->rear] = val;
    }
}

int main(){
    // normal kueue
    kueue* j = new kueue();
    j->size = 5;
    j->front = j->rear = -1;
    j->k = new int[j->size];

    // circular kueue
    circularKueue* z = new circularKueue();  
    z->front = z->rear = 0;
    z->size = 5;
    z->v = new int[z->size];

    // adding elements in normal kueue
    for(int i = 0; i<j->size; i++){
        if(j->rear == j->size-1){
            cout<<"The kueue is full sir"<<endl;
        }else{
            j->rear++;
            j->k[j->rear] = i+5;
        }
    }

    // removing elements from normal kueue
    for(int i = 0; i<j->size-3; i++){
        if(j->front == j->rear){
            cout<<"The kueue is empty"<<endl;
        }else{
            j->front++;
            j->k[j->front]= 0;
        }
    }

    // adding in circular kueue
    addingInCircularKueue(z,10);
    addingInCircularKueue(z,11);
    addingInCircularKueue(z,12);
    addingInCircularKueue(z,13);
    addingInCircularKueue(z,13);
    addingInCircularKueue(z,13);


    //deleting in circular kueue
    // removingInCircularKueue(z);
    // removingInCircularKueue(z);


    // display kueue
    cout<<"normal kueue"<<endl;
    for(int i=j->front+1; i<j->rear+1; i++){
        cout<<j->k[i]<<endl;
    }

    cout<<"circular kueue"<<endl;
    for(int i= z->front+1; i<z->rear+1 ; i++){
        cout<<z->v[i]<<endl;
    }
}