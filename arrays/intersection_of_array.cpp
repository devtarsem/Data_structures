#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int> nums1 = {4};
    vector<int> nums2 = {4};
    map<int, int> num1Map;
    map<int, int> num2Map;

    for(int num : nums1){
        num1Map[num]++;
    }

    for(int num : nums2){
        num2Map[num]++;
    }

    vector<int> final;

    for(const auto &pair1 : num1Map){
        for(const auto &pair2 : num2Map){
            if(pair1.first == pair2.first){
                int mini = min(pair1.second, pair2.second);
                for(int i = 0; i<mini; i++){
                    final.push_back(pair1.first);
                }
            }
        }
    }

    for(int i =0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
    

}