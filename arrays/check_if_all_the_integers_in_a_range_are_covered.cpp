#include<vector>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    vector<vector<int>> ranges = {
        {1,50},
        
    };

    int left = 1;
    int right = 50;
    int leftFound = 0;
    int rightFound = 0;

    
    for(int j = 0; j<ranges.size(); j++){
        if(ranges[j][0] <= left || ranges[j][1] <= left){
            leftFound = 1;

        }

        if(ranges[j][0] <= right || ranges[j][1] <= right){
            rightFound = 1;
        }
    }

    cout<<leftFound<<endl;
    cout<<rightFound<<endl;  
      

    if(leftFound && rightFound){
        return true;
    }else{
        return false;
    }


}