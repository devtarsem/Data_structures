#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    vector<string> operations = {"1","C"};
    vector<int> records;

    for(int i = 0; i<operations.size(); i++){
        if(operations[i]== "C" || operations[i]== "D" || operations[i]== "+"){
            if(operations[i]== "C"){
                if(i-1>=0){
                   records.erase(records.begin() + i-1);
                }
            }else if(operations[i]== "D"){
                if(i-1>=0){
                    int num = records[records.size()-1]*2;
                    records.push_back(num);
                }
            }else if(operations[i]== "+"){
                if(i-2>=0){
                    int num = records[records.size()-1] + records[records.size()-2];
                    records.push_back(num);
                }
            }
        }else{
            records.push_back(std::stoi(operations[i]));
        }
    }
    int sum = 0;
    for(int i = 0; i<records.size(); i++){
       sum += records[i];
    }
    cout<<sum;
}