#include<iostream>
using namespace std;

struct Array{
    int size;
    int* p;
    int position;
};

int insertionInArray(Array* z, int val){
    if(z->size == z->position){
        cout<<"The array is full"<<endl;
        return 0;
    }
    z->p[z->position] = val;
    z->position++;
    return 0;
}

void deletionInArrayFromEnd(Array* z){
    z->p[z->position] = 0;
    z->position--;
}

void deletionInArrayFromFront(Array* z){
    z->p[0] = 0;
    for(int i = 0; i<z->position; i++){
        z->p[i] = z->p[i+1];
    }
    z->position--;
}

void deletionAtIndex(Array* z, int index){
    z->p[index] = 0;
    for(int i = index; i<z->position; i++){
        z->p[i] = z->p[i+1];
    }
    z->position--;
}

void linearSeach(Array* z, int val){
    for(int i = 0; i<z->position; i++){
        if(z->p[i] == val){
            cout<<"The searched Key is found at index - "<<i<<" from linear search"<<endl;

            // transporting the search to reduce time spend on search
            if(i!=0){
                swap(z->p[i-1], z->p[i]);
            }
        }
    }
}

int binarySearch(Array* z, int val){
    int low, high, mid;
    low = 0;
    high = z->position;
    mid = (low + high)/2;
    while(low<=high){
        if(z->p[mid] == val){
            cout<<"The searched Key is found from binary search"<<endl;
            return 0;
        }
        else if(z->p[mid]<val){
            low = mid + 1;
        }
        else if(z->p[mid]>val){
            high = mid - 1;
        }
        mid = (low+high)/2;
    }

    return 0;

}

void display(Array* z){
    for(int i = 0; i<z->position; i++){
        cout<<z->p[i]<<endl;
    }
}

int main(){
    Array* newArrStruct = new Array();
    newArrStruct->size = 10;
    newArrStruct->position = 0;
    newArrStruct->p = new int[newArrStruct->size];

    insertionInArray(newArrStruct,10);
    insertionInArray(newArrStruct,15);
    insertionInArray(newArrStruct,20);
    insertionInArray(newArrStruct,25);
    insertionInArray(newArrStruct,30);
    insertionInArray(newArrStruct,35);


    deletionInArrayFromEnd(newArrStruct);

    deletionInArrayFromFront(newArrStruct);
    deletionInArrayFromFront(newArrStruct);
    insertionInArray(newArrStruct,40);

    deletionAtIndex(newArrStruct, 1);
    insertionInArray(newArrStruct,50);

    linearSeach(newArrStruct, 50);

    deletionInArrayFromEnd(newArrStruct);
    deletionInArrayFromEnd(newArrStruct);
    deletionInArrayFromEnd(newArrStruct);
    deletionInArrayFromEnd(newArrStruct);

    insertionInArray(newArrStruct,20);
    insertionInArray(newArrStruct,30);
    insertionInArray(newArrStruct,40);
    insertionInArray(newArrStruct,50);
    insertionInArray(newArrStruct,60);
    


    binarySearch(newArrStruct, 50);

    display(newArrStruct);
}