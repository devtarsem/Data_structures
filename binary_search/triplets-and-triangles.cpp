#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> nums = {4,2,3,4};
    int a = 0;
    int b = 1;
    int c = 0;
    int count = 0;

    while(a!= nums.size() - 2){
        
        for(int i = c; i<nums.size(); i++){
            if((i!= a && i!=b && nums[a]+nums[b] > nums[i] && nums[b]+nums[i]>nums[a]) && nums[a]+nums[i]>nums[b]){
                cout<<"triplet ( "<<nums[a]<<" , "<<nums[b]<<" , "<<nums[i]<<endl;
                count++;
            }
        }

        if(b!= nums.size()-1){
            b++;
            a++;
            c = 0;
        }else{
            break;
        }

    }

    cout<<count;
}