#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> banned = {1,6,5};
    int n = 5;
    int maxSum = 6;
    int iterator = 1;

    int sum = 0;
    int count = 0; // 1 --> 2 --> 3 --> 4 --> 5 --> 6

    while(iterator <= n){ // 1 < 7 --> 2<7 --> 3<7 --> 4<7 --> 5<7 --> 6<7 --> 7<7

        if(sum>maxSum){
            break;
        }

        if(find(banned.begin(), banned.end(), iterator) == banned.end()){
            cout<<"this goes : "<<iterator<<endl;
            sum += iterator;
            if(sum>maxSum){
                break;
            }
            count++;
        }

        iterator++;
    }

    cout<<count;
}