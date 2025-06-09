#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    vector<int> nums = {1,1,1};
    set<int> check(nums.begin(), nums.end());
    cout<<check.size()<<endl;

    bool start = true;
    int operation= 0;
    while(start){
        sort(nums.begin(), nums.end());
        int largest = 0;
        int largest_index = 0;
        int smallest = 0;
        int smallest_index = 0;
        // finding the largest element with smallest i
        for(int i = nums.size()-1; i>-1; i--){
            if(nums[i] != nums[i-1]){
                largest = nums[i];
                largest_index = i;
                break;
            }
        }

        // finding the nearst small with respect to largest
        for(int i = nums.size()-1; i>-1; i--){
            if(nums[i] != nums[i-1]){
                smallest = nums[i-1];
                smallest_index = i-1;
                break;
            }
        }

        cout<<largest<<" : "<<smallest<<endl;

        
        
        // interchanging values
        nums[largest_index] = smallest;
        operation++;


        // loop check
        bool stop = false;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] != nums[i+1]){
                stop = true;
                break;
            }
        }

        if(!stop){
            start = false;
        }

    }

    cout<<operation;
}