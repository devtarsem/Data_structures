#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> matches = {
        {1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}
    };

    vector<int> winner;
    vector<int> losser;

    for(int i = 0; i<matches.size(); i++){
        winner.push_back(matches[i][0]);
        losser.push_back(matches[i][1]);
    }
    for(int i = 0; i<winner.size(); i++){
        cout<<winner[i]<<endl;
    }
    vector<int> onlyWin;
    sort(losser.begin(), losser.end());

    for(int i = 0; i<winner.size(); i++){
        int high = losser.size()-1;
        int low = 0;
        int target = winner[i];
        int mid = (high+low)/2;
        int founded = 0;
        while(low<=high){
            if(losser[mid] == target){
                founded = 1;
                break;
            }else if(losser[mid] > target){
                high = mid - 1;
            }else if(losser[mid] < target){
                low = mid + 1;
            }
            int mid = (high+low)/2;

        }
        if(!founded){
            onlyWin.push_back(target);
        }
        founded = 0;
    }

    for(int i = 0; i<onlyWin.size(); i++){
        cout<<onlyWin[i]<<endl;
    }

}