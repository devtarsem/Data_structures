#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> changed = {0,3,2,4,6,0}; //   1 0 3 6
    sort(changed.begin(), changed.end());
    int iteration = 0;

    vector<int> original ;

    while(iteration < changed.size()){
        int low = 0;
        int high = changed.size()-1;
        int mid = (low + high)/2;
        int target = changed[iteration]*2;
        int founded = 0;
        while(low<=high){
            if(changed[mid] == target){
                if(target == 0 && iteration == mid) break;
                founded = 1;
                original.push_back(target/2);
                if (mid > iteration) {
                    changed.erase(changed.begin() + mid);
                    changed.erase(changed.begin() + iteration);
                } else {
                    changed.erase(changed.begin() + iteration);
                    changed.erase(changed.begin() + mid);
                }
                break;
            }else if(changed[mid] > target ){
                high = mid - 1;
            }else if(changed[mid] < target){
                low = mid+1;
            }
            mid = (low + high)/2;
        }

        if(!founded && iteration == 0){
            iteration++;
        }



    }

    for(int i = 0; i<original.size(); i++){
        cout<<original[i]<<endl;
    }

    // if(original.size() == changed.size()/2){
    //     return original;
    // }else{
    //     vector<int> pre;
    //     return pre;
    // }

}