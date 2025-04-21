#include<iostream>

#include<vector>

using namespace std;

int main(){
    int red = 2;
    int blue = 4;
    int redCopy = red;
    int blueCopy = blue;

    int intRed = 2;
    int intBlue = 1;

    int height = 0;

    // starting with blue
    for(int i = 1; i<(redCopy+blueCopy); i++){
        if(i%2 == 0){   
            red = red - intRed;
            intRed = intRed + 2;
            if(red<0){
                break;
            }
            height++;

        }else{
            blue = blue - intBlue;
            intBlue = intBlue + 2;
            if(blue<0){
                break;
            }
            height++;
        }
    }

    cout<<"The height from blue start"<<height<<endl;

    int height2 = 0;
    intRed = 1;
    intBlue = 2;
    red = redCopy;
    blue = blueCopy;
    for(int i = 1; i<(redCopy+blueCopy); i++){
        if(i%2 != 0){   
            red = red - intRed;
            intRed = intRed + 2;
            if(red<0){
                break;
            }
            height2++;

        }else{
            blue = blue - intBlue;
            intBlue = intBlue + 2;
            if(blue<0){
                break;
            }
            height2++;
        }
    }

    cout<<"The height from red start"<<height2<<endl;

    return height2 > height ? height2 : height;

}