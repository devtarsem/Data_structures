#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<vector<string>> boxGrid = {
        {"#","#","*",".","*","."},
        {"#","#","#","*",".","."},
        {"#","#","#",".","#","."},

    };

    // rotation 
    vector<vector<string>> nump(boxGrid[0].size(), vector<string>(boxGrid.size()));

    for(int i = 0; i<boxGrid.size(); i++){
        for(int j = 0; j<boxGrid[i].size(); j++){
            nump[j][boxGrid.size()-1-i] = boxGrid[i][j];
        }
    }

    

  

    cout << "START\n";
    for(int i = 0; i < nump.size(); i++){
        for(int j = 0; j < nump[i].size(); j++){
            cout << "[" << nump[i][j] << "]";
        }
        cout << endl;
    }
    cout << "END\n";
    int cols = 0;
    int rows = nump.size()-1;

    while(cols < nump[0].size()){
        for(int i = rows; i > -1; i--){
            if(i + 1 < nump.size() && nump[i + 1][cols] == "." && nump[i][cols] == "#"){
                cout << "gone at: " << i << " : " << cols << endl;
                swap(nump[i][cols], nump[i + 1][cols]);
            }
        }
        cols++;
        rows = nump.size() - 1;
        cout << "col switched: " << cols << endl;
    }

    cout << "START\n";
    for(int i = 0; i < nump.size(); i++){
        for(int j = 0; j < nump[i].size(); j++){
            cout << "[" << nump[i][j] << "]";
        }
        cout << endl;
    }
    cout << "END\n";
}