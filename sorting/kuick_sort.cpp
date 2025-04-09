#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> p = {5,9,7,1,5,3,9,6, INT32_MAX};

    int l, h;
    int pivot = p[0];
    l = p[0];
    h = p[p.size()-1];

    do{
        do(l++;)while(pivot=>p[l]);
        do(h--;)while(pivot<p[h]);
    
        if(h>l){
            swap(p[l], p[h]);
        }
    }while(i<j)

    swap()

}