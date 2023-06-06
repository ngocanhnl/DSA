#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1000007];
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
//        f[i]=a[i];
    }
    for(int i=1; i<=n; i++){
        f[i] = max(f[i-1],f[i-2]+a[i]);
    }
    cout<<*max_element(f,f+n+1);
}
