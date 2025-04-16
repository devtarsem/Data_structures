#include<iostream>
#include<vector>
#include<Math.h>

using namespace std;

int main(){
    vector<int> aliceSizes = {2};
    vector<int> bobSizes = {1,3};
    int sumAlice = 0;
    int sumBob = 0;

    for(int i = 0; i<aliceSizes.size(); i++){
        sumAlice += aliceSizes[i];
    }
    for(int i = 0; i<bobSizes.size(); i++){
        sumBob += bobSizes[i];
    }

    int candydiff = abs(sumAlice - sumBob) / 2;
    vector<int> swapeed;
    int swapes = 0;

    for(int i = 0; i<aliceSizes.size(); i++){
        for(int j = 0; j<bobSizes.size(); j++){
            if(sumBob>sumAlice){
                if(bobSizes[j] - aliceSizes[i] == candydiff){
                    swapeed.push_back(aliceSizes[i]);
                    swapeed.push_back(bobSizes[j]);
                    swapes++;
                    break;
                }
            }else{
                if(aliceSizes[i]-bobSizes[j] == candydiff){
                    swapeed.push_back(bobSizes[j]);
                    swapeed.push_back(aliceSizes[i]);
                    swapes++;

                    break;

                }
            }
        }
        if(swapes){
            break;
        }
    }

    for(int i = 0; i<swapeed.size(); i++){
        cout<<swapeed[i]<<endl;
    }

}