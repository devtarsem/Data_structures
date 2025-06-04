#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> apple = {5};
    vector<int> capacity = {107};

    int sum = 0;
    for(int i = 0; i<apple.size(); i++){
        sum += apple[i];
    }

    sort(capacity.begin(), capacity.end(), greater<int>());

    int ele = 0;
    int count = 0;
    for(int j = 0; j<capacity.size(); j++){
        count += capacity[j];
        ele++;
        if(count>=sum){
            break;
        }
    }

    cout<<ele;

}