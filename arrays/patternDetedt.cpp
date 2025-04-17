#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,4,4,4};
    int key = 0;
    int count = 0;
    int m = 1;
    int k = 3;
    int first = 0;
    int sum= 0;
    int presum = 0;

    for(int i = 0; i<arr.size(); i++){
        int low = i;
        int high = m!=1 ? m : 0;

        while(high!=arr.size()){

            for(int p = low; p>high; p++){
                sum =  sum + arr[p];
            }
            if(!first){
                first = 1;
                count = 1;
                presum = sum;
            }else{
                if(presum == sum){
                    count++;
                }else{
                    if(count >= k){
                        cout<<"yes pattern found"<<count<<endl;
                        return true;
                    }else{
                        count = 0;
                        sum = 0;
                        presum = 0;
                    }
                }
            }

            low++;
            high++;
        }
    }
}