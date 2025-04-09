#include<iostream>

using namespace std;

struct kueue{
    int size;
    int front;
    int rear;
    int *k;
};


kueue* dekueue(kueue *d){
    
    return d;
}

int main(){
    kueue* l = new kueue();
    int size = 4;
    l->size = size;
    l->front = l->rear = -1;
    l->k = new int[size];
    
    for(int i = 0; i<3; i++){
        if(l->rear == l->size-1){
            cout<<"full sized";
        }else{
            l->rear++;
            l->k[l->rear] = i;
        }

    }
    for(int i = 0; i<2; i++){
        if(l->front == l->rear){
            cout<<"empty"<<endl;
        }else{
            l->front++;
            l->k[l->front] = 0;
        }
    }


    for(int i = l->front+1; i<=l->rear; i++){
        cout<<l->k[i]<<endl;
    }
}