#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
#include<unordered_set>
#include<algorithm>

int main(){
    vector<int> nums = {3,2,2,5,2,3,7};
    vector<int> nump = nums;
    unordered_map<int, int > numMap;

    for(int num : nums){
        numMap[num]++;
    }

    vector<int> preFinal = {};
    int consider;
    int length = 0;

    for(int i = 0; i<nums.size(); i++){
        int max = nums[i];
        for(int j = i; j<nums.size(); j++){
            if(max-p[j] == 1 || max-p[j] == 0){
                if(!(find(preFinal.begin(), preFinal.end(), p[j]) != preFinal.end())){
                    preFinal.push_back(p[j]);
                }
            }
        }
        for(int i = 0; i<preFinal.size(); i++){
            if(preFinal[i] == numMap){
                length = length + numMap[preFinal[i]];
            }
        }

        preFinal.clear();

    }

    cout<<length;

}
