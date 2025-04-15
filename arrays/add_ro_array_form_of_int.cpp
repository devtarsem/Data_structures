#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> num = {2,7,4};
    int manipulator;
    manipulator = pow(10, num.size()-1);

    int sum = 0;
    for(int i = 0; i<num.size(); i++){
        sum += num[i]*manipulator;
        manipulator = manipulator/10;
    }

    int add = 181;
    sum = sum + add;
    vector<int> newNum;
    while(sum){
        newNum.insert(newNum.begin(),  sum%10);
        sum = sum/10;
    }

    for(int i = 0; i<newNum.size(); i++){
        cout<<newNum[i]<<endl;
    }


}