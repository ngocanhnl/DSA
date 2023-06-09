#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    long long d[n];
    for(int i=0; i<n; i++){
        if(i==0){
            d[0] = a[0];
        }
        else{
            d[i] = a[i]-a[i-1];
        }
    }     
    for(long long x:d ) cout<<x<<' ';
}
