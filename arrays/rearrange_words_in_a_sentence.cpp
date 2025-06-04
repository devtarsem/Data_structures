#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<string>
#include<map>
#include <sstream>
#include<cctype>

int main(){
    string text = "Keep calm and code on";
    text[0] = tolower(text[0]);
    istringstream iss(text); // text ko word by word todne ke liye
    string word;
    map<int, vector<string>> unMap;


    while (iss >> word) {
        int len = word.length();
        unMap[len].push_back(word); // us length wale group me word daal do
    }
    string final;
    // 👇 print kar lete hain group wise
    for (auto &pair : unMap) {

        for(int i = 0; i<pair.second.size(); i++){
            final = final + " " + pair.second[i];
        }

        for (string &w : pair.second) {
            cout << w << " ";
        }
        cout << endl;
    }

    final.erase(0,1);
    final[0] = toupper(final[0]);
    cout<<final<<endl;


}