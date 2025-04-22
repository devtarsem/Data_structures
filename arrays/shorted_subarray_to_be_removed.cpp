#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,10,0,7,8,9};
    int subArrcount = 0;
    int bend = 0;
    int inital = 0;
    for(int i = 0; i<arr.size()-1; i++){
        bool repeat = true;
        while(repeat){
            if(i < 0){
                break;
            }
            if(arr[i] > arr[i+1]){
                bend = 1;
                if(i == 0){
                    inital = 1;
                }
                arr.erase(arr.begin()+i);
                i--;
                subArrcount++;
            }else{
                repeat = false;
            }
        }
    }
    // if(!inital && bend){
    //     subArrcount++;
    // }
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    cout<<subArrcount;
}