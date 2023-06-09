#include<bits/stdc++.h>
using namespace std;
long long f[1000001];
void mcd(int a[], int n){
    f[0] = a[0];
    for(int i=1; i<n; i++){
        f[i] = f[i-1] + a[i];
    }
}
int main(){
    int n; 
    cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    mcd(a,n);
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout<<f[r-1]-f[l-2]<<endl;
        
    }
    
    
}
