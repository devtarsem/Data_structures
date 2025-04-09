#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = 0;
    int prof = 0;
    int min = INT32_MAX;

    for(int price : prices){
        if(min>price){
            min = price;
        }else{
            int profit = price - min;
            if(maxProfit<profit){
                maxProfit = profit;
            }
        }
    }

    cout<<maxProfit;
}