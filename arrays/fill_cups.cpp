#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> amount = {0,0,0};

    bool start = true;
    int sum = 0;
    for(int i = 0;i<amount.size(); i++){
        sum = sum + amount[i];
    }
    int sec = 0;

    while(start){
        sort(amount.begin(), amount.end());
        if(amount[amount.size() - 1]!=0 && amount[amount.size() - 2]!=0){
            amount[amount.size() - 1] = amount[amount.size() - 1] - 1;
            amount[amount.size() - 2] = amount[amount.size() - 2] - 1;
            sum--;
            sum--;
            sec++;
        }else if(amount[amount.size() - 1]!=0){
            amount[amount.size() - 1] = amount[amount.size() - 1] - 1;
            sum--;
            sec++;

        }

        if(sum == 0){
            start = false;
        }
        

    }

    cout<<sec;

}