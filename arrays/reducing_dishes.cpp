#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    vector<int> satisfaction = {2,-2 ,-3 ,1};
    sort(satisfaction.begin(), satisfaction.end());

    int likeTime = 0;
    int iteration = 1;

    for(int i = 0; i<satisfaction.size(); i++){
        int sum = 0;
        for(int j = i; j<satisfaction.size(); j++){
            sum = sum + satisfaction[j] * iteration;
            cout<<sum<<endl;
            iteration++;
        }
        if(likeTime < sum){
            likeTime = sum;
        }
        iteration = 1;
    }

    cout<<likeTime<<endl;

}