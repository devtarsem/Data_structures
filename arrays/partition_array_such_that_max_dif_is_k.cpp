#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> nums = {16,8,17,0,3,17,8,20};
    int k = 10;

    vector<int> pre;
    
    vector<vector<int>> subse;

    while (!nums.empty()) {
    auto it = min_element(nums.begin(), nums.end());
    int minVal = *it;
    int idx = distance(nums.begin(), it);

    vector<int> pre = {minVal};
    int minE = minVal, maxE = minVal;

    vector<int> nextNums;
    for (int i = 0; i < nums.size(); i++) {
        if (i == idx) continue;
        int val = nums[i];
        if (val >= minVal) {
            if (val - minE <= k) {
                pre.push_back(val);
                minE = min(minE, val);
                maxE = max(maxE, val);
            } else {
                nextNums.push_back(val);
            }
        } else {
            if (maxE - val <= k) {
                pre.push_back(val);
                minE = min(minE, val);
                maxE = max(maxE, val);
            } else {
                nextNums.push_back(val);
            }
        }
    }

    subse.push_back(pre);
    nums = nextNums;
}

    cout<<subse.size();

}