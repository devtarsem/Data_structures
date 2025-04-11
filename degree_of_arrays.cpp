#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int DegreeCalc(vector<int> p){
    std::sort(p.begin(), p.end());
    int degree = 1;
    int maxDegree = 1;
    for(int i = 0; i<p.size()-1; i++){
        if(p[i] == p[i+1]){
            degree++;
        }else{
            if(maxDegree<degree){
                maxDegree = degree;
            }
            degree = 1;
        }
    }
    if(maxDegree<degree){
        maxDegree = degree;
    }

    return maxDegree;

}   

vector<int> GenerateSubArrays(vector<int> subs, int degreeMain){
    vector<int> subsLength;
    for(int i = 0; i<subs.size()-1; i++){
        int low = 0;
        int high = i+1;
        vector<int> pre;
        while(high!=subs.size()){
            for(int j = low; j<high+1; j++){
                pre.push_back(subs[j]);
            }
    
            int degree = DegreeCalc(pre);
            if(degree == degreeMain){
                subsLength.push_back(pre.size());
            }
            pre.clear();
            low++;
            high++;
        }
    }

    return subsLength;
}

int main(){
    vector<int> nums = {47,47,72,47,72,47,79,47,12,92,13,47,47,83,33,15,18,47,47,47,47,64,47,65,47,47,47,47,70,47,47,55,47,15,60,47,47,47,47,47,46,30,58,59,47,47,47,47,47,90,64,37,20,47,100,84,47,47,47,47,47,89,47,36,47,60,47,18,47,34,47,47,47,47,47,22,47,54,30,11,47,47,86,47,55,40,49,34,19,67,16,47,36,47,41,19,80,47,47,27};
    int deg = DegreeCalc(nums);
    cout<<deg;
    vector<int> len = GenerateSubArrays(nums, deg);
    cout<<*std::min_element(len.begin(), len.end());
}