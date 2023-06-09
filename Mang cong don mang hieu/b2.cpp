#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n, q; cin >> n >> q;
    long long a[n], f[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    f[0] = a[0];
    for(int i=1; i<n; i++){
        f[i] = f[i-1] + a[i];
    }
     while(q--){
         int l, r; cin >> l >> r;
         if(l==0){
             cout<<f[r]<<endl;    
        }
        else{
            cout<<f[r]-f[l-1]<<endl;
        }
    }
}
