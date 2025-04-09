#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>

int main(){
    // vector<int> a = {-1,0,1,2,-1,-4};
    vector<int> a = {-1,0,1,2,-1,-4};
    // vector<int> a = {0,0,0};
    int m,n,o;
    m = n = o = 9999999;

    vector<vector<int>> sum3;

    for(int i = 0; i<a.size(); i++){
        for(int j = i+1; j<a.size()-1; j++){
            for(int k = j+1; k<=a.size()-1; k++){
                if(a[i] > 0 && a[j]>0 && a[k]>0){
                    continue;
                }else{
                    if(a[i] + a[j] + a[k] == 0){
                        vector<int> temp = {a[i] , a[j] , a[k]};
                        sum3.push_back(temp.sort(temp.begin(), temp.end()));
                        m = a[i];
                        n=a[j];
                        o=a[k];
                    }
                }
            }
        }
    }


    for(int i = 0; i<sum3.size(); i++){
        cout<<"triplet is : -"<< endl;
        for(int j = 0; j<sum3[i].size(); j++){
            cout<<sum3[i][j]<< endl;

        }
    }

}