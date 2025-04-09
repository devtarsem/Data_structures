#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    vector<int> nums = {1, 3, 2, 1, 4, 3, 1};
    unordered_map<int, int> fre;

    for(int num : nums){
        fre[num]++;
    }
    vector<int> final;
    vector<pair<int, int>> freqVec(fre.begin(), fre.end());

    // Step 3: Sort vector by frequency (second) in descending order
    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    for (auto& pair : freqVec) {
        cout << "Element " << pair.first << " => Frequency: " << pair.second << endl;
        if(final.size() == k){
            break;
        }
        final.push_back(pair.first);
    }
}