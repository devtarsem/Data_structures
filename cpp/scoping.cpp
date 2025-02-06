#include <iostream>
using namespace std;
int x = 10;
int main(){
    {
        int a = 10;
        int x = 35;
        
        {
            cout<<x<<endl; // 35
            int b = 20;
            int x = 55;
            cout<<a<<endl; //10
            cout<<b<<endl; //20
            cout<<x<<endl; //55
        }
        cout<<a<<endl; //10
        cout<<x<<endl; //35
        cout<<::x<<endl; //10

    }
}