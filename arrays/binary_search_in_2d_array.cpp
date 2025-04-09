#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60},
    };
    int target = 0;

    for(int i = 0; i<matrix.size(); i++){
        int low, high, mid;
        low = 0;
        high = matrix[i].size()*1;
        mid = (low + high)/2;
        while(high>=low){
            if(matrix[i][mid] == target){
                cout<<"yes searched";
                return 0;
            }else if(matrix[i][mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
            mid = (low + high)/2;
        }
    }

    cout<<"Not researched";
    return 0;
}