#include<iostream>
#include<vector>

using namespace std;

int main(){
    int carry = 0;
    vector<int> num = {2,1,5};
    int k = 806;
    vector<int> kArr;

    while(k){
        kArr.insert(kArr.begin(),  k%10);
        k = k/10;
    }

    int i , j;
    i = num.size()-1;
    j = kArr.size()-1;

    vector<int> final;

    while(i>=0){
        int add = num[i] + (j>=0 ?kArr[j] : 0) + carry;
        if(add>=10){
            carry = 1;
            final.insert(final.begin(), add%10);
        }else{
            final.insert(final.begin(), add);
            carry = 0;
        }
        i--;
        j--;
    }
    
    if(carry == 1){
        final.insert(final.begin(), carry);

    }

    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
}