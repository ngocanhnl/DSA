#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    int dem1 = 0, dem2=0;
    for(int i=0; i<n*2; i++){
        if(i%2==0){
            cout<<a[dem1]<<' ';
            dem1++;
        }
        else{
            cout<<b[dem2]<<' ';
            dem2++;
        }
        
    }
    
}
