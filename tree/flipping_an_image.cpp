#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> image = {
        {1,1,0,0},
        {1,0,0,1},
        {0,1,1,1},
        {1,0,1,0}
    };

    for(int i = 0; i<image.size(); i++){
        int low = 0;
        int high = image[i].size()-1;
        while(high>low){
            swap(image[i][low], image[i][high]);
            low++;
            high--;
        }

        for(int j = 0; j<image[i].size(); j++){
            if(image[i][j] == 0){
                image[i][j] = 1;
            }else{
                image[i][j] = 0;
            }
        }
    }

    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image[i].size(); j++){
            cout<<image[i][j];
        }
        cout<<" "<<endl;
    }
}