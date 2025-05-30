#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {4,6,5,9,3,7};
    vector<int> l = {0,0,2};
    vector<int> r = {2,3,5};
    vector<bool> final;

    for(int i = 0; i<l.size(); i++){
        vector<int> temp(nums.begin() + l[i], nums.begin() + r[i] + 1);
        sort(temp.begin(), temp.end());

        bool is_arith = true;
        int diff = temp[1] - temp[0];

        for(int j = 2; j < temp.size(); j++){
            if(temp[j] - temp[j-1] != diff){
                is_arith = false;
                break;
            }
        }
        final.push_back(is_arith);
    }

    return final;
}
