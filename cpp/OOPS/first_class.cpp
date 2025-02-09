#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
};


int main(){
   Rectangle *p;
   Rectangle r;
   p = &r;
   r.length = 10;
   r.breadth = 10;
   cout<<r.area()<<endl;

   p->length = 20;
   p->breadth = 40;
   cout<<p->area()<<endl;

    // inside heap

    Rectangle *u;
    u = new Rectangle();

    u->length = 86;
    u->breadth = 78;

    cout<<u->area()<<endl;

}