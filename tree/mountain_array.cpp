#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,3,2,1};
    int low = 0;
    int high = 0;

    if(arr.size()<3){
        cout<<"Not a mountain array"<<endl;
        return 0;
    }

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == arr[i+1]){
            cout<<"Not a mountain array"<<endl;
        }
        else if(arr[i] < arr[i+1]){
            low++;
        }else{
            if(low == 0){
                cout<<"Not a mountain array"<<endl;
                return 0;
            }
            for(int j = low; j<arr.size(); j++){
                if(arr[i] > arr[i+1]){
                    high++;
                }else{
                    cout<<"Not a mountain array"<<endl;
                }
            }
        }
    }
}