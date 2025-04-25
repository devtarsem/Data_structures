#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int main(){

    vector<string> products = {
        "mobile","mouse","moneypot","monitor","mousepad"
    };

    string searchWord = "mou";
    vector<string> searchArr;

    int low = 0;
    int high = 0;
    for (int i = 1; i <= searchWord.size(); ++i) {
        searchArr.push_back(searchWord.substr(0, i)); // Get substrings from index 0 with length i
    }

    for(int i = 0; i<searchArr.size(); i++){
        cout<<searchArr[i]<<endl;
    }
    
    int searchsize = searchWord.size();
    vector<string> pre;
    vector<vector<string>> final;
    int checked = 0;

    for(int k=0; k<searchArr.size(); k++){
        for(int i = 0; i<products.size(); i++){
            for(int j = 0; j<products[i].size(); j++){
                if(products[i][j] == searchArr[k][j]){
                    checked++;
                }
            }
    
            if(find(pre.begin(), pre.end(), products[i]) == pre.end() && checked ==  searchArr[k].size()){
                pre.push_back(products[i]);
            }
            final.push_back(pre);
            pre.clear();
            checked = 0;
        }

    }


    for(int i = 0; i<final.size(); i++){
        for(int j = 0; j<final[i].size(); j++){
            cout<<final[i][j]<<endl;
        }
    }

}