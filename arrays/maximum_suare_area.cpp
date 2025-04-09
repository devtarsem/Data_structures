#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1,1,1,0,0},
        {1,1,1,0,1},
        {1,1,1,0,1},
        {1,0,0,1,0}
    };

    vector<int> preserve ;
    int area = 0;
    int sizeBox = 0;
    int line_passed = 0;

    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                break;
            }else{
                sizeBox++;
                if(preserve.size()!=2){
                    preserve.push_back(i);
                    preserve.push_back(j);
                }
            }
            int p = 0;
            if(j == matrix[i].size()-1){
                while(p!=matrix.size()){
                    p = i+preserve[0];
                    for(int i= p; p<matrix[i].size(); p++){
                        if(matrix[p][i]!=1){
                            p = matrix.size();
                            break;
                        }
                    }
                    line_passed++;
                    preserve[0]++;
                }
            }
            
        }
    }

    cout<<line_passed;
    cout<<pow((line_passed+1),2)<<endl;
}
