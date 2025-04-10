#include<iostream>
#include<vector>
using namespace std;
#include<cmath>

int main(){
    vector<vector<int>> image = {
        {100,200,100},
        {200,50,200},
        {100,200,100}
    };

    int rows = image.size();
    int cols = image[0].size();
    vector<int> pre;
    vector<vector<int>> smooth;


    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image[i].size(); j++){
            int self = image[i][j];
            int count = 1;
            int topLeft, top, topRight,left, right, bottomLeft, bottom, bottomRight;
            topLeft = top = topRight = left = right = bottomLeft =bottom = bottomRight = 0;

            if(i+1<rows){
                bottom = image[i+1][j];
                count++;
            }

            if(i+1<rows && j+1<cols){
                bottomRight = image[i+1][j+1];
                count++;

            }

            if(i+1<rows && j-1>=0){
                bottomLeft = image[i+1][j-1];
                count++;

            }

            if(i-1>=0){
                top = image[i-1][j];
                count++;

            }

            if(i-1>=0 && j+1<cols){
                topRight = image[i-1][j+1];
                count++;

            }

            if(i-1>=0 && j-1>=0){
                topLeft = image[i-1][j-1];
                count++;

            }

            if(j+1<cols){
                right = image[i][j+1];
                count++;

            }
            
            if(j-1>=0){
                left = image[i][j-1];
                count++;

            }

            int sum = floor((topLeft + top + topRight + left + right + bottomLeft +bottom + bottomRight + self)/count);
            pre.push_back(sum);
            sum = 0;

        }
        smooth.push_back(pre);
        pre.clear();
    }


    for(int i = 0; i<smooth.size(); i++){
        for(int j = 0; j<smooth[i].size(); j++){
            cout<<" ";
            cout<<smooth[i][j];
            cout<<" ";

        }
        cout<<" "<<endl;
    }
}