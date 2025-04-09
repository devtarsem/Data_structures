#include<iostream>
#include<vector>

using namespace std;

struct kueue{
    int rear;
    int front;
    int size;
    int *p;
};

void InsertInKueue(kueue *j, int val){
    if((j->rear+1)%j->size == j->front){
        cout<<"the kueue is full";

    }else{
        j->rear = (j->rear+1)%j->size;
        j->p[j->rear] = val;
    }
}

void deleteFromKueue(kueue *j){
    if(j->rear == j->front){
        cout<<"the kueue is empty ";
    }else{
        j->front = (j->front+1)%j->size;
        j->p[j->front] = 0;

    }

}

int main(){
    kueue k ;
    k.rear = 0;
    k.front = 0;
    k.size = 10;
    k.p = new int[k.size];

    InsertInKueue(&k, 10);
    InsertInKueue(&k, 11);
    InsertInKueue(&k, 12);
    InsertInKueue(&k, 13);
    InsertInKueue(&k, 14);
    InsertInKueue(&k, 15);
    deleteFromKueue(&k);
    deleteFromKueue(&k);


    for(int i = k.front+1; i<=k.rear; i++){
        cout<<k.p[i]<<endl;
    }

}