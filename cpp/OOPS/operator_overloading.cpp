#include<iostream>
using namespace std;

class complexNumber{
    private:
        int real;
        int img;
    
    public:
        complexNumber(int r = 0, int i = 0){
            real = r;
            img = i;
        }

        // complexNumber operator+(complexNumber x){
        //     complexNumber temp;
        //     temp.real = real+x.real;
        //     temp.img = img+x.img;
        //     return temp;
        // }


        int displayReal(complexNumber p){
            return p.real;
        }

        int displayomplexNumber(){
            cout<<real <<"+ i"<<img;
            return 0;
        }
        friend complexNumber operator+(complexNumber c1, complexNumber c2);
       
};
complexNumber operator+(complexNumber c1, complexNumber c2){
    complexNumber t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}


int main(){
    complexNumber c1(5,7);
    complexNumber c2(9,10);
    complexNumber c3;

    c3 = c1 + c2;
    c2.displayomplexNumber();

}   