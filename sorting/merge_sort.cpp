#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1,2,10,18,20};
    vector<int> b = {7,8,10,51,53,121,545,888};
    vector<int> merged;
    int i,j;
    i = j = 0;
    while(i<a.size()-1 && j<b.size()-1){
        if(a[i] > b[j]){
            merged.push_back(b[j]);
            j++;
        }else if(a[i] == b[j]){
            merged.push_back(b[j]);
            merged.push_back(a[i]);
            i++;
            j++;
        }
        else{
            merged.push_back(a[i]);
            i++;
        }
    }

    for(int p = i; p<a.size(); p++){
        merged.push_back(a[p]);
    }
    for(int p = j; p<b.size(); p++){
        merged.push_back(b[p]);
    }

    for(int i = 0; i<merged.size(); i++){
        cout<<merged[i]<<endl;
    }
}