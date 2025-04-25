#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int lo = 7;
    int hi = 11;
    int k = 4;

    vector<int> arr ;

    for(int i = lo; i<hi+1; i++){
        arr.push_back(i);
    }

    vector<int> pre;
    vector<vector<int>> final;

    for(int i = 0; i<arr.size(); i++){
        int x = arr[i];
        int power = 0;
        while(x!=1){
            if(x % 2 == 0){
                x = x/2;
            }else{
                x = 3*x + 1;
            }
            power++;
        }
        pre.push_back(arr[i]);
        pre.push_back(power);
        final.push_back(pre);
        pre.clear();

    }
    sort(final.begin(), final.end(), [](const vector<int>& a, const vector<int>& b){
        return a[1] != b[1] ? a[1] < b[1] : a[0] < b[0];
    });

    for(int i = 0;i<final.size(); i++){
        for(int j = 0; j<final[i].size()-1; j++){
            cout<<"Arr value :- "<<final[i][0]<<"Power of arr value :- "<<final[i][1]<<endl;
        }

    }

    return final[k-1][0];

}