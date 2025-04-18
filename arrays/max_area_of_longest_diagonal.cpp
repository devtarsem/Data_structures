#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>


using namespace std;

int main(){
    vector<vector<int>> dimensions = {
        {3,4},
    };

    int dia = 0;
    int area = 0;

    if(dimensions.size() == 1){
        area = dimensions[0][0] * dimensions[0][1];
        cout<<area;
        return area;
    }

    for(int i = 0; i<dimensions.size(); i++){
        int l = dimensions[i][0];
        int b = dimensions[i][1];

        int diagonal = sqrt(l*l + b*b);
        
        if(dia < diagonal){
            dia = diagonal;
            area = l*b;
        }else if(dia == diagonal){
            if(area < l*b){
                area = l*b;
            }
        }

    }

    cout<<area;
}