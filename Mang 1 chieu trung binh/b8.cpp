#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >>n >> m;
    int a[n], b[m];
    for(int &x:a){
        cin >> x;
    }
    for(int &x:b){
        cin >> x;
    }
    int dem1 = 0, dem2 = 0;
    while(dem1<n&&dem2<m){
        if(a[dem1]<b[dem2]){
            cout<<a[dem1]<<' ';
            dem1++;
        }
        else{
            cout<<b[dem2]<<' ';    
            dem2++;
        }
    }
    if(n != dem1){
        for(int i=dem1; i<n; i++) cout<<a[i]<<' ';
    }
    else{
        for(int i=dem2; i<m; i++) cout<<b[i]<<' ';
    }
    
    
}
