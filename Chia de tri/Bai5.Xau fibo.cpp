#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;
ll f[93];
void ktao(){
    f[1] = 1;
    f[2] = 1;
    for(int i=3; i<=92; i++){
        f[i] = f[i-2] + f[i-1]; 
    }
    
}

char solve(int n, int k){
    if(n==1){
        return 'A';
    }
    if(n==2){
        return 'B';
    }

    if(k > f[n-2]){
        return solve(n-1,k-f[n-2]);
    }
    else return solve(n-2,k);
}

int main(){
    ll a, b; cin >> a >>  b;
    ktao();
    cout<<solve(a,b);
}
