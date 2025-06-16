#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main(){
    vector<vector<int>> boxTypes = {
        {5,10},
        {2,5},
        {4,7},
        {3,9},

    };
    int truckSize =10;

    sort(boxTypes.begin(), boxTypes.end(), [](vector<int> a, vector<int> b){
        return(a[1]>b[1]);
    });

  
    int units = 0;
    for(int i = 0; i<boxTypes.size(); i++){

        if(truckSize==0) break;

        if(truckSize-boxTypes[i][0] > 0){
            units = units + boxTypes[i][0]*boxTypes[i][1];
            truckSize = truckSize - boxTypes[i][0];
        }else{
            units = units + truckSize*boxTypes[i][1];
            truckSize = 0;


        }
    }

    cout<<units<<endl;
}