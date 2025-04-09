#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a = 1;
    int div = 2;
    vector<vector<int>> prime;
    int j = 12;
    int iterator = 0;
    vector<int> checker = {2,7,13,19};
    std::sort(checker.begin(), checker.end());
    while(j != iterator){
        vector<int> mins;

        int k = a;
        while(k!=1){
            if(k%div == 0){
                k = k/div;
                mins.push_back(div);
            }else{
                div++;
            }
        }
        // mins.push_back(a);
        std::sort(mins.begin(), mins.end());

        if(includes(mins.begin(), mins.end(),checker.begin(), checker.end())){
            prime.push_back(mins);  // ✅ Push prime factors to `prime`
            iterator++;
        }
        
        a++;
        div = 2; 
    }

    cout<<a<<endl;
    
    // for(int i = 0; i<prime.size(); i++){
    //     for(int j = 0; j<prime[i].size();j++){
    //         cout<<prime[i][j];
    //     }
    //     cout<<" "<<endl;
    // }
}

