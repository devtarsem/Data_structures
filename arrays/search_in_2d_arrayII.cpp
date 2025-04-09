#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> p ={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int target = 23;

    int low,high,mid;

    for(int i = 0; i<p.size(); i++){
        if(target>p[i][p[i].size()-1]){
            continue;
        }
        low = 0;
        high = p[i].size()-1;
        mid = (low + high)/2;
        while(low<=high){
            if(p[i][mid] == target){
                cout<<"searched"<<endl;
                return 0;
            }else if(p[i][mid] > target){
                high = mid - 1;
                if(p[i][high] < target){
                    break;
                }
            }else{
                low = mid + 1;
                if(p[i][high] > target){
                    break;
                }
            }
            mid = (low + high)/2;
        }
    }

}