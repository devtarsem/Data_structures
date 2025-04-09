#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> image = {
        {1,1,1},
        {1,1,0},
        {1,0,1}
    };
    int sr = 1;
    int sc = 1;
    int color = 2;

    for(int i = sr-1; i>-1; i--){
        if(image[i][sc] == image[sr][sc]){
            image[i][sc] = color;
        }
    }

    
    for(int i = sr+1; i<image.size(); i++){
        if(image[i][sc] == image[sr][sc]){
            image[i][sc] = color;
        }
    }

    for(int i = sc-1;  i>-1; i--){
        if(image[sr][i] == image[sr][sc]){
            image[sr][i] = color;
        }
    }
    for(int i = sc+1;  i<image[0].size(); i++){
        if(image[sr][i] == image[sr][sc]){
            image[sr][i] = color;
        }
    }

    image[sr][sc] = color;

    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image[i].size(); j++){
            cout<<image[i][j];
        }
        cout<<" "<<endl;
    }

}