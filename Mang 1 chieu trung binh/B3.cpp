#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    for(int i=0; i<n; i++){
        bool k = true;
        for(int j=0; j<i&& k==true; j++){
            if(a[j]>=a[i]){
                k = false;
            }
        }
        if(i==0){
            cout<<a[0]<<' ';
        }
        else{
            if(k){
                cout<<a[i]<<' ';
            }
        }
    }
}
