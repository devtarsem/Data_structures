#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {15,88};
    vector<vector<int>> pieces = {
        {88},
        {15}
    };

    int count = 0;

    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<pieces.size(); j++){
            if(pieces[j][0] == arr[i]){
                count++;
                for(int p = 1; p<pieces[j].size(); p++){
                    if(pieces[j][p] == arr[i+p]){
                        count++;
                    }else{
                        cout<<"falsy valued"<<endl;
                        return 0;
                    }
                }
            }
        }
    }

    if(count == arr.size()){
        cout<<"truthy valued"<<endl;
    }else{
        cout<<"falsy valued"<<endl;
        return 0;

    }

    return 1;
}