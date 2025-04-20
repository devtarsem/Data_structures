#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> events= {
        {10,5},
        {1,7}
    };

    if(events.size()==1){
        return events[0][0];
    }

    int time = 0;
    int index = -1;

    for(int i = 0; i<events.size(); i++){
        if(!time){
            time = events[i][1];
            index = events[i][0];

        }else{
            int nexttime = events[i][1] -events[i-1][1];
            if(nexttime > time){
                time = nexttime;
                index = events[i][0];
            }else if(nexttime == time){
                if(index > events[i][0]){
                    index = events[i][0];
                }
            }
        }
    }

    cout<<index<<endl;

}