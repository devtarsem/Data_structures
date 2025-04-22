#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

bool areCoprime(int a, int b) {
    return __gcd(a, b) == 1;
}

int main(){
    vector<int> nums = {84,91,18,59,27,9,81,33,17,58};

    int count = 0;
    int start = 0;
    int last = 1;

    while(start < nums.size()-1){
        int first = nums[start];
        int second = nums[last];
        int digitOne = 0;
        int digitLast = 0;


        while(first){
            if(first < 10){
                digitOne = first;
                break;
            }
            // int digit = first%10;
            first = first/10;
        }

            
        int digit = second%10;
        digitLast = digit;

        if(areCoprime(digitOne, digitLast)){
            count++;
        }

        if(last == nums.size()-1){
            start++;
            last = start + 1;
        }else{
            last++;
        }
    }

    cout<<count;
}