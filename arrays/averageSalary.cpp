#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int> salary = {1000,2000,3000};
    sort(salary.begin(), salary.end());

    float sum = 0;
    for(int i = 1; i<salary.size()-1; i++){
        sum += salary[i];
    }
    cout<<sum<<endl;
    sum = sum/(salary.size()-2);
    cout<<sum;

}