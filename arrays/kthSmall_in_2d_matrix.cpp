#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> p = {
        {-1}
        
    };
    int k = 1;
    vector<int> pissedoff ;

    for(int i = 0; i<p.size(); i++){
        for(int j = 0; j<p[i].size(); j++){
            pissedoff.push_back(p[i][j]);
    
        }
        std::sort(pissedoff.begin(), pissedoff.end());
    }

    cout<<pissedoff[k-1];
}