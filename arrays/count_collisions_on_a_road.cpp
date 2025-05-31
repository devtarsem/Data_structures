#include<iostream>
#include<vector>
using namespace std;
#include<string>

int main(){
    string directions = "SSRSSRLLRSLLRSRSSRLRRRRLLRRLSSRR";
    int collision = 0; // 2+1+

    for(int i = 0; i<directions.size()-1; i++){
        if(directions[i] == 'R' && (directions[i+1] == 'L' || directions[i+1] == 'S')){
            if(directions[i+1] == 'L'){
                collision++;
                collision++;
            }else if(directions[i+1] == 'S'){
                collision++;
            }
            
        
        }else if(directions[i] == 'S' && directions[i+1] == 'L'){
            collision++;
            directions[i] = directions[i+1] = 'S';
            
        }
    }

    cout<<collision<<endl;

}