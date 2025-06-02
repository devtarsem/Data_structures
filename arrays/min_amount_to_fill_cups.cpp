#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> amount = {5,4,4};
    int cups = 0;
    int cupstotal = amount[0] + amount[1] + amount[2];
    int s=0;
    while(cups!= cupstotal){
        if(amount[0] > 0 && amount[1] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;
            amount[0]--;
            amount[1]--;
            cups++;
            cups++;
            s++;

        }else if(amount[0] > 0 && amount[2] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;

            amount[0]--;
            amount[2]--;
            cups++;
            cups++;
            s++;

        }else if(amount[1] > 0 && amount[2] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;

            amount[1]--;
            amount[2]--;
            cups++;
            cups++;
            s++;

        }else if(amount[1] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;

            amount[1]--;
            cups++;
            s++;

        }else if(amount[0] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;

            amount[0]--;
            cups++;
            s++;

        }else if(amount[2] > 0){
            cout<<amount[0]<<" : "<<amount[1]<<" : "<<amount[2]<<endl;

            amount[2]--;
            cups++;
            s++;

        }
        
    }

    cout<<s;
}