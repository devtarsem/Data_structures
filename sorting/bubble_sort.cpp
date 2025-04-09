#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> list = {5,6,9,4,1,0,9};
    int flag = 0;
    for(int i = 0; i<list.size()-1; i++){
        for(int j = 0; j<list.size()-1-i; j++){
            if(list[j] > list[j+1]){
                swap(list[j], list[j+1]);
                flag = 1;
            }
        }
        if(!flag){
            return 0;
        }
    }

    for(int i = 0; i<list.size(); i++){
        cout<<list[i]<<endl;
    }
}