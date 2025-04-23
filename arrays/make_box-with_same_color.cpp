#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<vector<string>> grid = {
        {"B", "W", "B"},
        {"B", "W", "W"},
        {"B", "W", "W"}
    };

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            string left, right, bottom, top,topleft, topright, bottomleft, bottoright;
            top = left = bottom = top = topleft = topright = bottomleft = bottoright = "F";
            if(i-1>=0){
                top = grid[i-1][j];
            }

            if(j+1 < grid[i].size()){
                right = grid[i][j+1];
            }

            if(i+1 < grid.size()){
                bottom = grid[i+1][j];
            }

            if(j-1 >= 0){
                left = grid[i][j-1];
            }

            if(j-1>=0 && i-1>=0){
                topleft = grid[i-1][j-1];
            }

            if(i-1>=0 && j+1 < grid[i].size()){
                topright = grid[i-1][j+1];
            }

            if(i+1 < grid.size() && j-1 >= 0){
                bottomleft = grid[i+1][j-1];
            }

            if(i+1 < grid.size() && j+1 < grid[i].size()){
                bottoright = grid[i+1][j+1];
            }

            // possible pairs
            if(top!= "F" && right!="F" && topright!="F"){
                if(grid[i][j] == "W"){
                    if(top == "B" && right == "B" && topright == "B"){
                        cout<<"yes";
                        return true;
                    }
                }else{
                    if(top == "W" && right  == "W" && topright == "W"){
                        cout<<"yes";
                        return true;
                    }
                }

            }else if(right!="F" && bottom!="F" && bottoright!="F"){
                if(grid[i][j] == "W"){
                    if(right == "B" && bottom == "B" && bottoright == "B"){
                        cout<<"yes";
                        return true;
                    }
                }else{
                    if(right == "W" && bottom  == "W" && bottoright == "W"){
                        cout<<"yes";
                        return true;
                    }
                }
            }else if(top!="F" && left!="F" && topleft!="F"){
                if(grid[i][j] == "W"){
                    if(top == "B" && left == "B" && topleft == "B"){
                        cout<<"yes";
                        return true;
                    }
                }else{
                    if(top == "W" && left  == "W" && topleft == "W"){
                        cout<<"yes";
                        return true;
                    }
                }
            }else if(bottom!="F" && left!="F" && bottomleft!="F"){
                if(grid[i][j] == "W"){
                    if(bottom == "B" && left == "B" && bottomleft == "B"){
                        cout<<"yes";
                        return true;
                    }
                }else{
                    if(bottom == "W" && left  == "W" && bottomleft == "W"){
                        cout<<"yes";
                        return true;
                    }
                }
            }
            

        }
    }
}