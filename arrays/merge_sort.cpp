#include<iostream>

#include<vector>

using namespace std;

vector<int> mergingFromMid(vector<int> j, int low, int mid,int high){
    vector<int> b ;
    // int mid = (low + high)/2;
    int sec = mid + 1;
    while(low<=mid && sec<=high){
        if(j[low] > j[sec]){
            b.push_back(j[sec]);
            sec++;
        }else{
            b.push_back(j[low]);  
            low++;
        }
    }

    for(int i = low; i<mid; i++){
        b.push_back(j[i]);
    }
    for(int i = sec; i<high; i++) 
        b.push_back(j[i]);
    
    for(int i = 0; i<j.size(); i++){
        j[i] = b[i];
    }

    return b;
}

vector<int> IterativeSort(vector<int> m, int n){
    int p,l,h,mid,i;
    vector<int> A = m;

    for(p = 2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid = (i+h)/2;
            vector<int> f = mergingFromMid(A,l,mid,h);
            A = f;
        }
    }

    if(p/2<n){
        mergingFromMid(A,0,p/2-1,n-1);
    }

    return A;
}

int main(){
    vector<int> z= {2,4,6,8,1,3,5,7};


    vector<int> d = IterativeSort(z,8);
    z = d;

    for(int i = 0; i<z.size(); i++){
        cout<<z[i]<<endl;
    }
}