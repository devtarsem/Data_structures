#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr  ={3,3,3,3,5,5,5,2,2,7};
    unordered_map<int ,int> arrMap;

    for(auto i : arr){
        arrMap[i]++;
    }
    vector<int> iterate;
    for(auto i : arrMap){
        iterate.push_back(i.second);
        // cout<<i.first <<"  :  "<<i.second<<endl;
    }
    sort(iterate.begin(), iterate.end(), greater<int>());
    int target = arr.size()/2;
    int sum = 0;
    int count= 0;
    for(int i = 0; i<iterate.size(); i++){
        sum += iterate[i];
        count++;
        if(sum>=target){
            break;
        }
    }

    cout<<count;
}