#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>
#include<algorithm>

int main(){
    vector<int> p = {1,1,1,2,1};
    // unordered_set<int> nump(nums.begin(), nums.end());
    // vector<int> p(nump.begin(), nump.end());
    std::sort(p.begin(), p.end());
    int k = 1;
    int count = 0;

    for(int i = 0; i<p.size(); i++){
        int low = i;
        int high = i+1;
        while(high<p.size()){
            if(abs(p[low] - p[high]) == k){
                count++;
                break;
            }else if(abs(p[low] - p[high]) > k){
                break;
            }else if(abs(p[low] - p[high]) < k){
                if(abs(p[low] - p[high]) == 0){
                    while(p[high]!=p[low]){
                        high++;
                    }
                }else{
                    high++;
                }
            }

            
        }
    }


    cout<<count;
    
}