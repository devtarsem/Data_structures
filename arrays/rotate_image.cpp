#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    vector<vector<int>> p = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };

    for(int i = 0; i<p.size(); i++){
        for(int j = 0; j<p.size(); j++){
            if(j>i){
                swap(p[i][j], p[j][i]);
            }
        }
    }

    for(int i = 0; i<p.size(); i++){
        int high,low;
        low = 0;
        high = p[i].size()-1;
        while(high>=low){
            swap(p[i][high], p[i][low]);
            low++;
            high--;
        }
    }

    for(int i = 0; i<p.size(); i++){
        for(int j = 0; j<p.size(); j++){
           cout<<p[i][j];
        }
        cout<<" "<<endl;
    }

}