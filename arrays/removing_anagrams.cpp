#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    vector<string> words = {"a","b","c","d","e"};

    for(int i = 1; i<words.size(); ){
        string s = words[i];
        sort(s.begin(), s.end());
        bool removed = false;
        for(int j = i-1; j<words.size(); j++){
            string str = words[j];
            sort(str.begin(), str.end());
            if(s == str  ){
                words.erase(words.begin()+j);
                removed = true;
            }
        }
        if(!removed){
            i++;
        }
    }

    for(int i = 0; i<words.size(); i++){
        cout<<words[i]<<endl;
    }

}