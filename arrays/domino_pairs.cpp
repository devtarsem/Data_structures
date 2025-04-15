#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> dominoes = {
        {1,2},
        {1,2},
        {1,1},
        {1,2},
        {2,2}
    };
    int pair = 0;
    // for(int i = 0; i<dominoes.size(); i++){
    //     int low = i;
    //     int high = i + 1;
    //     while(high != dominoes.size()){
    //         if((dominoes[low][0] == dominoes[high][0] && dominoes[low][1] == dominoes[high][1]) || (dominoes[low][0] == dominoes[high][1] && dominoes[low][1] == dominoes[high][0])){
    //             pair++;
    //         }
    //         high++;
    //     }
    // }

    int low = 0;
    int high = 1;
    while(low!= dominoes.size()){
        if((dominoes[low][0] == dominoes[high][0] && dominoes[low][1] == dominoes[high][1]) || (dominoes[low][0] == dominoes[high][1] && dominoes[low][1] == dominoes[high][0])){
            pair++;
        }

        if(high == dominoes.size()){
            low++;
            high = low + 1;
        }else{
            high++;
        }

    }

    cout<<pair;
}