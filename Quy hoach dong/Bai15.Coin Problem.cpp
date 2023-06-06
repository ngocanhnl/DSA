#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    int f[k+1];
    f[0]=0;
    for(int i=1; i<=k; i++){
        f[i] =1e9;
        for(int j=0; j<n; j++){
            if(i>=a[j])
                f[i] = min(f[i],f[i-a[j]]+1);
        }
    }
    if(f[k]==1e9){
        cout<<"-1";
    }
    else cout<<f[k];
}
