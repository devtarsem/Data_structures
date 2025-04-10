#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

    int r = 4;
    int c = 80;
    vector<int> linear;
    vector<vector<int>> reshape;

    if(r*c != mat.size()*mat[0].size()){
        cout<<"conversion not accepted";
        return 0;
    }

    for(int i = 0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            linear.push_back(mat[i][j]);
        }
    }
    int iterator = 0;
    vector<int> pre;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            pre.push_back(linear[iterator]);
            iterator++;
        }
        reshape.push_back(pre);
        pre.clear();

    }
    for(int i = 0; i<reshape.size(); i++){
        for(int j = 0; j<reshape[i].size(); j++){
            cout<< "  ";
            cout<<reshape[i][j];
            cout<< "  ";

        }
        cout<<" "<<endl;
    }
}