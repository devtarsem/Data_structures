#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> temperatures = {30,60,90};
    vector<int> wait ;
    int count = 1;

    for(int i = 0; i<temperatures.size(); i++){
        if(i == temperatures.size()-1){
            wait.push_back(0);
            break;
        }
        for(int j = i+1; j<temperatures.size(); j++){
            if(temperatures[i] < temperatures[j]){
                wait.push_back(count);
                count = 1;
                break;
            }else{
                count++;

            }
            if(j == temperatures.size()-1){
                wait.push_back(0);
                count = 1;

            }
        }   
    }

    for(int i = 0; i<wait.size(); i++){
        cout<<wait[i]<<endl;
    }

}