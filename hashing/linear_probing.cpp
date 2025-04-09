#include<iostream>
#include<vector>
using namespace std;


int Insert(int arr[], int key){
    int hash = key%10;

    if(!arr[hash]){
        arr[hash] = key;
    }else{
        int i = 1;
        int newhash = (hash + i)%10;
        while(arr[newhash]){
            i++;
            newhash = (hash + i)%10;
        }
        arr[newhash] = key;
    }
    return 0;
}

int main(){
    vector<int> p = {5,7,8,52,958,92,145,9,2,0};

    int *arr = new int[p.size()](); // for making lambda <= 0.5

    for (int i = 0; i < p.size(); i++) {
        Insert(arr, p[i]);
    }

    for(int i = 0; i<p.size(); i++){
        if(p[i]){
            cout<<"The value at index :  - " <<i<<" is :  - "<<arr[i]<<endl;
        }else{
            cout<<"The value at index" <<"NULL"<<endl;

        }
    }

}