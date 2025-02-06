
#include <iostream>
using namespace std;

int* findMax(int *p, int size){
    int *max;
    int maxval = 0;
    for(int i = 0; i<size; i++){
        if(maxval<p[i]){
            max = &p[i];
        }
    }
    
    return max;
}

int main() {
    int a[5] = {1,2,4,5,9};
     
    int *maxvalfun = findMax(a, sizeof(a)/4);
    cout << "The maximum value is "<<*maxvalfun;
    

    return 0;
}