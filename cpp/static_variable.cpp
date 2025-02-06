#include<iostream>
using namespace std;

int staticFun(){
    static int a = 0;
    a++;
    cout<<"The static variable a is : "<<a<<endl;
    return a;
}

int main(){
    for(int i = 0; i<5; i++){
        staticFun();
    }
}