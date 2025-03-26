#include<iostream>
using namespace std;

struct queue{
    int front;
    int rear;
    int size;
    int *arr;
};

int insertion(queue *h, int element){
    if(h->rear == h->size-1){

    }else{
        h->rear++;
        h->arr[h->rear] = element;
    }
   return 0;
}

int deleteIT(queue *h){
    if(h->rear == h->front){
        cout<<"the queue is empty"<<endl;
        return 0;
    }else{
        h->front++;
        h->arr[h->front] = 0;
    }
    return 0;
}

int main(){
    queue p;
    cout<<"Entre the size of the array you need"<<endl;
    cin>>p.size;

    p.arr = new int [p.size];
    p.front = p.rear = -1;
    cout<<"Result of insertion operations"<<endl;

    insertion(&p,10);
    insertion(&p,9);
    insertion(&p,8);
    insertion(&p,7);
    insertion(&p,6);

    for(int i = 0; i<p.size; i++){
        cout<<p.arr[i]<<endl;
    }

    cout<<"Result of deletion operations"<<endl;
    deleteIT(&p);
    deleteIT(&p);

    for(int i = 0; i<p.size; i++){
        cout<<p.arr[i]<<endl;
    }
    
    return 0;
}