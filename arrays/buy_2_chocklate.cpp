#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> prices = {1,2,2};
    int money = 3;

    int low = 0;
    int high = 1;
    int moneyLeft = -1;

    while(low!=prices.size()-1){
        cout<<prices[low]<<prices[high]<<endl;

        if(prices[low] + prices[high] <= money){
            moneyLeft = money - prices[low] + prices[high];
        }

        if(high==prices.size()-1){
            low++;
            high = low+1;
        }else{
            high++;
        }
    }

    return moneyLeft!=-1 ? moneyLeft : money;
}