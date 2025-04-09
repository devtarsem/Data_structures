#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include <unordered_map>

int main(){
    vector<int> nums = {1,2};
    int p = nums.size()/3;
    std::sort(nums.begin(), nums.end());
    unordered_map<int, int> fre;
    vector<int> reps;

    for (int num : nums) {
        fre[num]++;
        cout<<num<<" : "<<fre[num]<<endl;
        if(fre[num]>p){
            if (!(find(reps.begin(), reps.end(), num) != reps.end())) {
                reps.push_back(num);
            }
        }
    }

    for(int i =0; i<reps.size(); i++){
        cout<<reps[i]<<endl;
    }

}
