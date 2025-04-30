#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> digits = {2,2,8,8,2};

    int low = 0;
    int high = 1;

    vector<int> muller;
    sort(digits.begin(), digits.end());


    while(low!= digits.size()-1){
        int mupltiplex1 = digits[low] * 100;
        int mupltiplex2 = digits[high] * 10;

        for(int i = 0; i<digits.size(); i++){
            if(i!= low && i!=high){
                int num = mupltiplex1 + mupltiplex2 + digits[i];
                if(num%2==0 && num>=100){
                    auto it = find(muller.begin(), muller.end(), num);
                    if(it == muller.end()){
                        muller.push_back(num);
                    }
                }
            }
        }

        mupltiplex1 = digits[low] * 10;
        mupltiplex2 = digits[high] * 100;
        for(int i = 0; i<digits.size(); i++){
            if(i!= low && i!=high){
                int num = mupltiplex1 + mupltiplex2 + digits[i];
                if(num%2==0 && num>=100){
                    auto it = find(muller.begin(), muller.end(), num);
                    if(it == muller.end()){
                        muller.push_back(num);
                    }
                }
            }
        }
        // break;

        if(high == digits.size()-1){
            low++;
            high = low+1;
        }else{
            high++;
        }

    }


    for(int i = 0; i<muller.size(); i++){
        cout<<muller[i]<<endl;
    }
}