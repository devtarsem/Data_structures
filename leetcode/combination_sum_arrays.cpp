#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[4] = {2,4,6,7};
    int target = 8;
    vector<vector<int>> v;


    for(int i = 0; i<4; i++){
        if(target%arr[i]==0 && arr[i]<target){
            vector<int> pre;
            int manipulator = 0;
            while(manipulator != target){
                pre.push_back(arr[i])  ;
                manipulator = arr[i] + manipulator;
            }
            v.push_back(pre);
            manipulator = 1;
            pre.clear();
        }else{

        }
    }

    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<endl;
        }
    }
}