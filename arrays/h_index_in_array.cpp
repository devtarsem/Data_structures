#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> citations = {3,1,1}; // {0,1,3,5,6} {1,1,1,2}
    std::sort(citations.begin(), citations.end());

    if(citations.size() == 1){
        if(citations[0] == 1){
            return 1;
        }else{
            return 0;
        }
    }

    for(int j = citations.size()-1; j>-1; j--){
        if(citations[j]>citations.size()){
            continue;
        }else{
            int citi = (citations.size()-1) - j; // 2

            if(citi+1 >= citations[j]){
                cout<<"Yes we founded the h-index is "<<citations[j]<<endl;
                return citations[j];
            }
        }

    }

}