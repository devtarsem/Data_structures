#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;
#include <sstream>

long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    return f;
}
int main(){
    vector<int> nums = {2,2,1,1};


    int overall = factorial(nums.size());
    map<int,int> nump;
    for (int x : nums) {
        nump[x]++;
    }

    int divisor = 1;
    for(auto p : nump){
        divisor *= factorial(p.second);
    }

    cout<<overall<<" : "<<divisor<<endl;

    map<vector<int>, int> numsMap;
    int iteration = 0;
    int rotate = nums.size()-1;
    int start = 0;
    int divi = (overall/divisor) ;
    vector<int> temp;
    cout<<"divi : "<<divi<<endl;
   while (iteration < divi) {
    swap(nums[rotate], nums[rotate - 1]);
    rotate = (rotate == 1 ? nums.size()-1 : rotate-1);
    numsMap[nums]++;
    iteration++;
}
    vector<vector<int>> final;
    for(const auto &p : numsMap){
        final.push_back(p.first);
    }

    for(int j = 0; j<final.size(); j++){
        cout<<final[j][0]<<" : "<<final[j][1]<<" : "<<final[j][2]<<" : "<<final[j][3]<<endl;;
    }
}