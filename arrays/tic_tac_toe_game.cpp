#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<vector<int>> moves = {
        {0,0},
        {1,1},
        {0,1},
        {0,2},
        {1,0},
        {2,0}
    };

    vector<vector<char>> board(3, vector<char>(3,'D'));

    for(int i = 0; i<moves.size(); i++){
        if(i%2 != 0){
            board[moves[i][0]][moves[i][1]] = 'o';
        }else{
            board[moves[i][0]][moves[i][1]] = 'X';
        }
    }

    // rows check
    for(int i = 0; i<board.size(); i++){
        int o=0;
        int x=0;
        for(int j = 0; j<board[i].size(); j++){
            if(board[i][j] == 'D') break;
            if(board[i][j] == 'o'){
                o++;
            }else if(board[i][j] == 'X'){
                x++;
            }
        }
        if(o == board.size()-1){
            cout<<"player o wins";
            return 1;
        }else if(x == board.size()-1){
            cout<<"player x wins";
            return 1;
        }
    }

    // colums check
    for(int i = 0; i<board.size(); i++){
        int o=0;
        int x=0;
        for(int j = 0; j<board[i].size(); j++){
            if(board[j][i] == 'D') break;
            if(board[j][i] == 'o'){
                o++;
            }else if(board[j][i] == 'X'){
                x++;
            }
        }
        if(o == board.size()-1){
            cout<<"player o wins";
            return 1;
        }else if(x == board.size()-1){
            cout<<"player x wins";
            return 1;
        }
    }


    // diagonals check (striaght i == j)
    int rows = board.size();
    int cols = board[0].size()-1;
    int o = 0;
    int x = 0;


    while(rows != board.size()){
        if(board[rows][cols] == 'D') break;

        if(board[rows][cols] == 'o'){
            o++;
        }else if(board[rows][cols] == 'x'){
            x++;
        }
        rows++;
        cols++;
    }

    if(o == board.size()-1){
        cout<<"player o wins";
        return 1;
    }else if(x == board.size()-1){
        cout<<"player x wins";
        return 1;
    }

    // cross diagonal check 
    rows = 0;
    cols = board[0].size()-1;
    o = x = 0;

    while(rows != board.size()){
        if(board[rows][cols] == 'D') break;

        if(board[rows][cols] == 'o'){
            o++;
        }else if(board[rows][cols] == 'x'){
            x++;
        }
        rows++;
        cols--;
    }

    if(o == board.size()-1){
        cout<<"player o wins";
        return 1;
    }else if(x == board.size()-1){
        cout<<"player x wins";
        return 1;
    }

    return 1;
}