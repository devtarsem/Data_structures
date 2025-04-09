#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> p = {9};
    int carry = 0;
    vector<int> plused;

   
    // plused.push_back(0);
    if(p.size() != 1){
        for(int i = p.size()-1; i>-1; i--){
            if(i+1 == p.size()){
                // this is the last element in which one is going to add;
                int val = p[i] + 1;
                if(val>=10){
                    carry = 1;
                    plused.insert(plused.begin(), val-10);
                }else{
                    plused.insert(plused.begin(), val);
                    carry =0;
                }
            }else{
                int val = p[i] + carry;
                if((i == 0 && carry == 1) && val>=10){
                    plused.insert(plused.begin(), val-10);
                    plused.insert(plused.begin(), 1);
                    
                }else{
                    if(val>=10){
                        carry = 1;
                        plused.insert(plused.begin(), val-10);
                    }else{
                        plused.insert(plused.begin(), val);
                        carry = 0;
                    }
                }
            }
        }

    }else{
        int val = p[0]+1;
        if(val>=10){
            plused.push_back(1);
            plused.push_back(0);
        }else{
            plused.push_back(val);
        }
        
    }

    for(int i = 0; i<plused.size(); i++){
        cout<<plused[i]<<endl;
    }

}