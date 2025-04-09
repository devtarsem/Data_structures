#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> p ={1,14,21,25,29,30,277};
    vector<int> r ={1,2,100,101,121,145,189,653};
    vector<int> final;
    int i = 0;
    int j = 0;
    int k = 0;

    int m = p.size();
    int n = r.size();

    while(i<m && j<n){
        if(p[i] < r[j]){
            final.push_back(p[i]);
            i++;
        }else if(p[i] == r[j]){
            final.push_back(p[i]);
            final.push_back(r[j]);
            i++;
            j++;
        }else{
            final.push_back(r[j]);
            j++;
        }
    }

    for(int z = i; z<p.size(); z++){
        final.push_back(p[z]);
        
    }
    for(int z = i; z<r.size(); z++){
        final.push_back(r[z]);
    }

    for(int i = 0; i<m+n; i++){
        cout<<final[i]<<endl;
    }

}
