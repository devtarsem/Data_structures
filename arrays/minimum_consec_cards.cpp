#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> cards = {1,0,5,3};
    int pre =INT32_MAX;
    int cons = 0;

    int low = 0;
    int high = 1;
    vector<int> pres;

    while(low!=cards.size()-1){
        if(cards[high] != cards[low]){
            pres.push_back(cards[high]);
            high++;
        }else{
            
            if(pres.size() < pre){
                pre = pres.size();
            }
            pres.clear();
            low++;
            high = low+1;
        }

        if(high == cards.size()){
            pres.clear();
            low++;
            high = low+1;
        }
    }

    cout<<pre;
}
