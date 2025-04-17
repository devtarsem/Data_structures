#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {13,16,7,3,14,4,12,19,6,6,7,16,17,17};

    if(arr.size()==0){
        return arr[0];
    }

    sort(arr.begin(), arr.end());
    
    int fre = 1; // 2 3
    int freeval ;
    int maxFre = 0;
    int finalEle;
    
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            finalEle = arr[i];
            fre++;
        }else{
            if(fre == arr[i] && fre > maxFre){
                maxFre = fre;
                freeval = arr[i];
            }
            fre = 1;
            
        }
    }

    if(fre == finalEle && fre > maxFre){
        maxFre = fre;
        freeval = finalEle;
    }

    cout<<maxFre<<endl;
    cout<<freeval<<endl;

}