#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> asteroids = {10, 2 ,-5};
    bool changed = true;

    while(changed){

        changed = false;

        for(int i = 0; i<asteroids.size(); i++){
            if(asteroids[i]<0 && i!=0){
                if(abs(asteroids[i]) < abs(asteroids[i-1] ) && asteroids[i-1]>0  ){
                    asteroids.erase(asteroids.begin() + i);
                }else if(abs(asteroids[i]) > abs(asteroids[i-1]) && asteroids[i-1]>0){
                    asteroids.erase(asteroids.begin() + (i - 1));
                }else if(asteroids[i-1]>0 && asteroids[i]<0 && abs(asteroids[i-1]) == abs(asteroids[i])){
                    asteroids.erase(asteroids.begin() + i);
                    asteroids.erase(asteroids.begin() + (i - 1));
                }
                changed = true;
                break;
            }
        }
    
        
    }
    for (int a : asteroids) {
        cout << a << " ";
    }

}