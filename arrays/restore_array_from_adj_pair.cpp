#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> adjacentPairs = {
        {4,-2},
        {1,4},
        {-3,1}
    };

    vector<int> arr;

    for(int i = 0; i<adjacentPairs.size(); i++){
        if(arr.size()==0){
            arr.push_back(adjacentPairs[i][0]);
            arr.push_back(adjacentPairs[i][1]);
        }else{
            auto first = find(arr.begin(), arr.end(), adjacentPairs[i][0]);
            auto second = find(arr.begin(), arr.end(), adjacentPairs[i][1]);
            if(first != arr.end() && second == arr.end()){
                int copysec = adjacentPairs[i][1];
                int last = arr[arr.size()-1];
                for(int i = arr.size()-1; i>first - arr.begin(); i--){
                    arr[i] = arr[i-1];
                    if(i == first - arr.begin()){
                        arr[i-1] = copysec;
                    }
                }
                arr.push_back(last);

            }else if(first == arr.end() && second != arr.end()){
                int copysec = adjacentPairs[i][0];
                int last = arr[arr.size()-1];
                for(int i = arr.size()-1; i>second - arr.begin(); i--){
                    arr[i] = arr[i-1];
                    if(i == second - arr.begin()){
                        arr[i-1] = copysec;
                    }
                }
                arr.push_back(last);
            }else if(first == arr.end() && second == arr.end()){
                arr.push_back(adjacentPairs[i][0]);
                arr.push_back(adjacentPairs[i][1]);
            }
        }
    }

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
}