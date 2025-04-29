#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4};
    int k = 2;
    int iterator = 1;
    int counter = 1;
    vector<int> missing; // 1 

    while(missing.size()!=k){
        if(arr[counter-1] != iterator){
            missing.push_back(iterator);
            iterator++;
        }else{
            counter++;
            iterator++;
        }
    }   

    for(int i = 0; i<missing.size(); i++){
        cout<<missing[i]<<endl;
    }
}