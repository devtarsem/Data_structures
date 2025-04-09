#include<iostream>
#include<vector>

using namespace std;

/*
int main(){
    vector<int> p = {-1,1,0,-3,3};
    vector<int> s;
    vector<int> stack;
    vector<int> prefill;
    int multiplier = 0;
    int count = 0;

    while(s.size() != p.size()){
        for(int i = 0; i<p.size()-1; i++){
            if(prefill.size()==0){
                multiplier = p[i];
                prefill.push_back(1);
                count++;
            }else{
                if(count != i){
                    multiplier = multiplier*p[i];
                    prefill.push_back(multiplier);
                }
                count++;
            }
        }
        count++;
        s.push_back(prefill[prefill.size()-1]);
        prefill.clear();
    }
    s[s.size()-1] = 1;
    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<endl;
    }
}
*/

int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> output(n);
    output[0] = 1;
    for(int i=1; i<n; i++){
        output[i] = output[i-1] * nums[i-1];
    }
    int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
    for(int i = 0; i<output.size(); i++){
        cout<<output[i]<<endl;
    }
}