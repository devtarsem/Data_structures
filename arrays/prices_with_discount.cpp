#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> prices = {10,1,1,6};
    vector<int> discount;

    for(int i = 0; i<prices.size(); i++){
        int founded = 0;
        for(int j = i+1; j<prices.size(); j++){
            if(prices[i] >= prices[j]){
                founded = 1;
                discount.push_back(prices[i] - prices[j]);
                break;
            }
        }
        if(!founded){
            discount.push_back(prices[i]);
        }
    }

    for(int i = 0; i<discount.size(); i++){
        cout<<discount[i]<<endl;
    }

}