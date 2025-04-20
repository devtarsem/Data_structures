#include<iostream>
#include<vector>

using namespace std;

int score(vector<int> player){
    int score = 0;
    for(int i = 0; i<player.size(); i++){
        if(i == 0){
            score = score + player[i];

        }else if(i == 1){
            score = score + (player[i-1] == 10 ?  player[i]*2 : player[i]);

        }else{

            score = score + (player[i-1] == 10 || player[i-2] == 10 ?  player[i]*2 : player[i]);
        }
    }
    return score;
}

int main(){
    vector<int> player1 = {1,1,1,10,10,10,10};
    vector<int> player2 = {10,10,10,10,1,1,1};

    int score1 = 0; // 13
    int score2 = 0;

    int tenX1 = 0;

    score1 = score(player1);
    score2 = score(player2);

    if(score1 > score2){
        return 1;
    }else if(score1 < score2){
        return 2;
    }else{
        return 0;
    }

}