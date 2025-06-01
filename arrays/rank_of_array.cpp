#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> nums = {37}; // 10 20 20 30 40
    vector<int> nump = nums;
    sort(nump.begin(), nump.end());
    vector<int> rankp;
    vector<int> rankfinal;


    int r = 1;

    for(int i = 0; i<nump.size(); i++){
        if(i == 0){
            rankp.push_back(r);
        }else{
            if(nump[i] == nump[i-1]){
                rankp.push_back(r);
            }else{
                rankp.push_back(++r);
            }
        }
    }

    for(int i = 0; i<nums.size(); i++){
        int low = 0;
        int high = nump.size()-1;
        int target = nums[i];
        while(low<=high){
            int mid = (low+high)/2;
            if(nump[mid] == target){
                rankfinal.push_back(rankp[mid]);
                break;
            }else if(nump[mid] > target){
                high = mid-1;
            }else if(nump[mid] < target){
                low = mid+1;
            }
        }
    }

    for(int i = 0; i<rankfinal.size(); i++){
        cout<<rankfinal[i]<<endl;
    }
}