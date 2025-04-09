#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> p = {1,1,0,1,1,1};
    int reps = 0; // 1
    int max = 0;

    if(p.size() == 1){
        if(p[0]==1){
            return 1;
        }else{
            return 0;
        }
    }

    for(int i = 0; i<p.size(); i++){
        
        for(int j = i; j<p.size(); j++){
            if(p[i] == 1 && p[j]==1){
                reps++;
            }else{
                break;
            }
        }


        if(max<reps){
            max = reps;
        }
        reps = 0;
        if(max>=p.size()-i-1){ 
            break;
        }
    }

    cout<<max<<endl;
}