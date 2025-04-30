#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> dist = {4,3,4}; // [2 2] [0]
    vector<int> speed = {1,1,2};
    int weapon = 1;
    int killed = 0;
    int iterations = 0;
    while(true){
        if( dist.size()==0){
            break;
        }
        if(weapon){
            killed = killed+1;
            for(int p = 0; p<dist.size(); p++){
                if(dist[p] <= 0){
                    dist.erase(dist.begin() + p);
                    speed.erase(speed.begin() + p);
                    break;
                }
            }
            weapon = 0;
        }
        if(iterations%2 != 0){
            weapon = 1;

        }

        
        for(int j = 0; j<dist.size(); j++){
            dist[j] = dist[j] - speed[j];
        }

        // for(int j = 0; j<dist.size(); j++){
        //     cout<<dist[j]<<" -> ";
        // }
        // cout<<" "<<endl;
        iterations++;
    }

    cout<<killed;
}
