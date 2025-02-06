#include<iostream>
using namespace std;


int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}


int main(){
    int (*fp)(int , int);
    fp = max;
    int maxval = fp(10,5);
    cout<<maxval<<endl;

    fp = min;
    int minval = fp(10,5);
    cout<<minval<<endl;

}