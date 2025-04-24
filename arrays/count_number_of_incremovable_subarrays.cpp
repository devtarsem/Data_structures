#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};

    int nume = 0;
    vector<int> final;

    for(int j = 0; j<nums.size(); j++){
        int low = 0;
        int high = j;
        while(high!=nums.size()){
            vector<int> nump;
            for(int i = 0; i<nums.size(); i++){
                if(!(i>=low && i<=high)){
                    nump.push_back(nums[i]);
                }
            }            
            bool yes = true;
            for(int i = 0; i<nump.size()-1; i++){
                if(nump[i] > nump[i+1]){
                    yes = false;
                    break;
                }
            }
            cout<<" "<<endl;
            if(yes){
                cout<<"true"<<endl;
                final.push_back(1);
                nume++;
            }
            low++;
            high++;
        }
    }
    cout<<final.size();

}