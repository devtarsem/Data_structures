#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>
#include<algorithm>

int main(){
    vector<int> nums = {15,77,97,26,53,41,26,13,12,18,17,42,13,33,34,70,48,65,62,78,33,60,96,53,23,14,60,70,57,41,29,12,79,65,52,30};
    
    sort(nums.begin(), nums.end());
    int start = 0;
    int last  = nums.size()-1;
    int count = 0;

    unordered_set<double> setOfAvg;
    while(last>=start){
        double average = ((float)nums[start] + (float)nums[last])/2.0;
        setOfAvg.insert(average);
        
        start++;
        last--;
    }


    cout<<setOfAvg.size(); //         

}
