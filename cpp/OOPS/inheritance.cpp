#include<iostream>

using namespace std;

class Base{

    public:
        int x;
        int y;
    
    Base(){
        cout<<"Default constructor is called of BASE"<<endl;
    }

    Base(int a=0, int b=0){
        x = a;
        y = b;
        cout<<"Parametrized constructor is called of BASE"<<endl;
    }
    public:
        void show(){
            cout<<"X : "<<x<<" , "<<" Y : "<<y<<endl;
        }
    
};

class Derived:public Base{

    public:
        int z ;

        
        Derived(int a, int b, int c):Base(a, b){
            z = c;
            cout<<"Parametrized constructor is called of DERIVED"<<endl;
        }
        
    
    public :
        void setZ(int a){
            z = a;
        }

        void Display(){
            cout<<"X : "<<x<<" Y : "<<y << " Z : "<<z<<endl;
        }

};

int main(){
    Base b(5,6);
    b.show();
    Derived d(5,6,7);
    d.show();
    d.setZ(10);
    d.Display();
}   