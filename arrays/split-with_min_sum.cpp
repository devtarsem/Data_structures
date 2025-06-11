#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int num = 4325;
    int num1, num2 ;
    num1 = num2 = 0;

    vector<int> digits;
    while(num){
        digits.push_back(num%10);
        num = num / 10;
    }

    sort(digits.begin(),digits.end());
    int multi1 = 10
    int multi2 = 10
    int sum1 = digits[0] * 10 + digits[];
    int sum2 = 0;

    for(int i= 0; i<digits.size(); i++){
        if(i%2==0){
            sum1 = sum1 + multi*digits[i];
        }
    }
}