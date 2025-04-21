#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> skills = {3,2,5,1,3,4};

    int team = skills.size() / 2;

    double skillSum = 0;
    for(int i = 0; i<skills.size(); i++){
        skillSum += skills[i];
    }
    skillSum = skillSum / team;
    int x = (int)skillSum;  
    if(skillSum > x){
        cout<<"Not possible";
        return -1;
    }

    vector<vector<int>> final;
    vector<int> pre;
    int counter = 0;


    int low = 0;
    int high = 1;
    cout<<skillSum<<endl;

    while(true){
        
        if(skills[low] + skills[high] == skillSum){
            pre.push_back(skills[low]);
            pre.push_back(skills[high]);
            
            low++;
            if(low  == skills.size() / 2){
                break;
            }
            high = low + 1;
        }else{
            high++;
        }
    }

    int prod = 0;
    int i = 0;
    while(i!=pre.size()){
        prod = prod + pre[i]*pre[i+1];
        i++;
        i++;
    }
    cout<<prod;

  
}