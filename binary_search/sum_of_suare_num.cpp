#include<iostream>
#include<vector>
using namespace std;
#include<math.h>

int main(){
    int c = 4;
    double p = sqrt(c/2);

    int floored = floor(p);
    int ceiled = ceil(p);

    if(pow(floored,2) + pow(ceiled, 2) == c || (pow(floored,2) == c || pow(ceiled,2))){
        cout<<"yes"<<endl;
        return 1;
    }else{
        cout<<"no"<<endl;

        return 0;
    }


}