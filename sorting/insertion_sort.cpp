#include<iostream>
#include<vector>

using namespace std;

vector<int> InsertionSort(vector<int> p){
    for(int i = 1; i<p.size(); i++){
        int x = p[i];
        int j = i-1;
        while(j>-1 && p[j] > x){
            p[j+1] = p[j];
            j--;
        }
        p[j+1] = x;
    }
    return p;
}

int main(){
    vector<int> nums = {5,8,7,9,6};
   
    vector<int> s = InsertionSort(nums);

    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<endl;
    }

}