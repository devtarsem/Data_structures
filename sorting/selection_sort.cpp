#include<iostream>

using namespace std;

#include<vector>

int main(){
    vector<int> p = {8,6,3,2,5,4};
    int x;
    int  l, k;
    for(int i = 0; i<p.size()-1; i++){
        x = p[i];
        // k=l=j= i;
        k = i;
        l = i;
        while(l<p.size()){
            if(p[l] < p[k]){
                k = l;
                l++;
            }else{
                l++;
            }
        }
        // p[i] = p[k];
        // p[k] = x;
        swap(p[i], p[k]);

    }

    for(int i = 0; i<p.size(); i++){
        cout<<p[i]<<endl;
    }
}