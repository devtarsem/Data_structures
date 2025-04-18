#include<iostream>
#include<vector>

using namespace std;

int findingSun(int rUp, int rDown, int cUp, int cDown, vector<vector<int>> mat){
    // cout<<rUp<<" : "<<rDown<<" : "<<cUp<<" : "<<cDown<<endl;
    int sum = 0;
    for(int i = rDown; i<=rUp; i++){
        for(int j = cDown; j<=cUp; j++){
            sum += mat[i][j];
        }
    }

    return sum;
}

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int k = 2;

    vector<vector<int>> newmat;
    vector<int> pre;

    for(int i = 0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            int rUp, rDown, cUp, cDown;
            rUp = i + k > mat.size() - 1 ? mat.size()-1 : i+k;
            rDown = i-k < 0 ? 0 : i-k;

            cUp = j + k > mat[i].size()-1 ? mat[i].size()-1 : j + k;

            cDown = j - k < 0 ? 0 : j - k;

            int element = findingSun(rUp, rDown, cUp, cDown, mat);
            pre.push_back(element);
            // cout<<element<<endl;
        }
        newmat.push_back(pre);
        pre.clear();
    }

    for(int i = 0; i<newmat.size(); i++){
        for(int j = 0; j<newmat[i].size(); j++){
            cout<<newmat[i][j]<<" ";
        }
        cout<<" "<<endl;;

    }

}