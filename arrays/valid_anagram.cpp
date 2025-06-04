#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include<algorithm>

int main(){
    string s = "tarsem singh";
    string t = "tarsem ingh";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t){
        cout<<"true";
    }else{
        cout<<"false";

    }


}