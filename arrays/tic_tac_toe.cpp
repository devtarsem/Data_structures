#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> moves = {
        {0,0},
        {2,0},
        {1,1},
        {2,1},
        {2,2}
    };

    vector<vector<char>> board(3, vector<char>(3,' '));

    for(int i = 0; i<moves.size(); i++){
        if(i%2 == 0){
            board[moves[i][0]][moves[i][1]] = 'X';

        }else{
            board[moves[i][0]][moves[i][1]] = 'o';
        }
    }

    for(int j = 0; j<board.size(); j++){
        if(board[0][j] != ' '){
            if(j == i){
                for(int k = 0; k<board[i].size()-1; k++){
                    if(board[0][k] != board[0][k+1]){
                        break;
                    }
                }

                for(int k = 0; k<board.size()-1; k++){
                    if(board[k][0] != board[k+1][0]){
                        break;
                    }
                }

                for(int i = 0; i<board[i].size()-1; i++){
                    if(board[i][j] != board[][j+1]){
                        break;
                    }
                }

            }
        }
    }


    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board[i].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}