#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<math.h>

int main(){
    vector<vector<int>> nums = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row1 = 0;
    int col1 = 0;

    vector<int> diagonal;

    while(row1< nums.size() && col1 < nums[0].size()){
        diagonal.push_back(nums[row1][col1]);
        row1++;
        col1++;
    }

    row1 = 0;
    col1 = nums[0].size()-1;

    while(row1< nums.size() && col1 > -1){
        diagonal.push_back(nums[row1][col1]);
        row1++;
        col1--;
    }

    sort(diagonal.begin(), diagonal.end());

    int signal = 0;
    int prime = -1;
    for(int i = diagonal.size() - 1; i >= 0; i--) {
        if(diagonal[i] <= 1) continue;  // Skip 1 or below
        int signal = 0;
        for(int j = 2; j <= sqrt(diagonal[i]); j++) {
            if(diagonal[i] % j == 0) {
                signal = 1;
                break;
            }
        }
        if(!signal) {
            cout << "Yes, we got our prime: " << diagonal[i] << endl;
            prime = diagonal[i]
            break;
        }
    }
}