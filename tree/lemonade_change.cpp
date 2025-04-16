#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> bills = {5,5,10,10,20};
    int five, ten, twenty;

    five = ten = twenty = 0;

    for(int i = 0; i<bills.size(); i++){
        if(bills[i] == 5){
            five++;
        }else if(bills[i] == 10){
            ten++;
            if(five>=1){
                five--;
            }else{
                cout<<"change not available"<<endl;
            }
        }else if(bills[i] == 20){
            twenty++;
            if(five>=3){
                five = five - 3;
            }else if((five>=1 && ten>=1)){
                five--;
                ten--;
            }else{
                cout<<"change not available"<<endl;
            }
        }
    }

}