#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> brackets = {
        {10,10},
   
    };

    int income = 5;
    double interest_paid = 0;

    for(int i = 0; i<brackets.size(); i++){
        if(brackets[i][0] < income && i==0){
            interest_paid += brackets[i][0] * (brackets[i][1]);
        }else if(brackets[i][0] < income && i!=0){
            interest_paid += (brackets[i][0] - brackets[i-1][0]) * (brackets[i][1]);

        }else if(brackets[i][0] > income){
            if(i!=0){
                interest_paid += (income-brackets[i-1][0]) * (brackets[i][1]);

            }else{
                interest_paid += (income) * (brackets[i][1]);

            }

            break;
        }
    }
    interest_paid /= 100;
    cout<<interest_paid<<endl;
}