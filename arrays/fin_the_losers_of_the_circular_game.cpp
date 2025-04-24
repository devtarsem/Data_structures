#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    int n = 5;  // number of players
    int k = 2;  // jump step

    vector<int> occurs;
    occurs.push_back(1);

    int player = 1;
    int iterator = 1;

    while (true) {
        player = (player + k * iterator - 1) % n + 1;
        if (find(occurs.begin(), occurs.end(), player) != occurs.end()) {
            break;
        }
        occurs.push_back(player);
        iterator++;
    }

    vector<int> final;
    for (int i = 1; i <= n; i++) {
        if (find(occurs.begin(), occurs.end(), i) == occurs.end()) {
            final.push_back(i);
        }
    }

    cout << "Not visited players:\n";
    for (int i : final) {
        cout << i << endl;
    }
}

