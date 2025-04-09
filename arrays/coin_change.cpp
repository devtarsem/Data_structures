#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> coins = {186,419,83,408};
    int amount = 6249;
    std::sort(coins.begin(), coins.end(), std::greater<int>());
    int reco = 0;
    int coinused = 0;
    int valueCoin = 0;
    vector<int> usedcoins;

    int newAmount = -1;
    while(newAmount<0){

        for(int i = 0; i<coins.size(); i++){
            newAmount = amount-reco; // 
            if(newAmount == 0){
                break;
            }

            int diff = newAmount%coins[i];

            int noOfCOins = (newAmount-diff)/coins[i]; // 1-1 = 0
            if(noOfCOins == 0){
                continue;
            }
            int amtdiff = newAmount - noOfCOins*coins[i]; // 1

            if(amtdiff == 0){
                usedcoins.push_back(noOfCOins);
                valueCoin = coins[i];
                reco = valueCoin*noOfCOins;
                break;
            }

            while(!(amtdiff >= coins[coins.size()-1])){ // 1>1
                noOfCOins--;
                amtdiff = newAmount - noOfCOins*coins[i];
                
            }
            usedcoins.push_back(noOfCOins);
            valueCoin = coins[i];
            reco = reco + valueCoin*noOfCOins;
        }

        if(newAmount!=0){
            int last = coins[coins.size()-1];
            for(int i = coins.size()-1; i<0; i--){
                coins[i]= coins[i-1];
            }
            coins[0] = last;
            usedcoins.clear();
            reco = 0;
            valueCoin = 0;
        }

    }
    int sum = 0;
    for(int i = 0; i<usedcoins.size(); i++){
        cout<<usedcoins[i]<<endl;
        sum += usedcoins[i];
    }
    

}