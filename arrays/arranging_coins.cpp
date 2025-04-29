#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
    int n =  5;
    int formulation = (n*(n+1))/2;

    int rows_filled = (-1 + sqrt(1+4*1*n*2))/2;

    cout<<rows_filled;
    
}