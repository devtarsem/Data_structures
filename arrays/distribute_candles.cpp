#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>

int main(){
    vector<int> candyType = {6,6,6,6};
    int eat = candyType.size()/2;
    unordered_set<int> candy(candyType.begin(), candyType.end());
    if(candy.size() > eat){
        cout<<eat;
    }else{
        cout<<candy.size();
    }
}