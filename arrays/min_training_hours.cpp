#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> energy = {1,4,3,2};
    vector<int> experience = {2,6,3,1};
    int initialExperience = 3;
    int initialEnergy = 5;

    int shortfallInEnergy = 0;
    for(int i = 0; i<energy.size(); i++){
        if(initialEnergy >= energy[i]){
            initialEnergy -= energy[i];
        }else{
            shortfallInEnergy += energy[i] - initialEnergy;
        }
    }

    cout<<shortfallInEnergy<<endl;

    int shortfallInExp = 0;
    for(int i = 0; i<experience.size(); i++){
        if(initialExperience > experience[i]){
            initialExperience += experience[i];
        }else{
            shortfallInExp = experience[i] - initialExperience;
            initialExperience += experience[i];

        }
    }

    cout<<shortfallInExp<<endl;

    return (shortfallInEnergy !=0 ? shortfallInEnergy + 1:0)  + (shortfallInExp!=0 ? shortfallInExp + 1 : 0);

}