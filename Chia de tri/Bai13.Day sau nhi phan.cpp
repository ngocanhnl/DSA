#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
using ll = long long;
ll f[93];
void ktao(){
    f[1] = 1;
    f[2]=1;
    for(int i=3; i<=92; i++){
        f[i] = f[i-1] + f[i-2];
    } 
}
char solve(int n, int k){
    if(n==1) return '0';
    if(n==2) return '1';
    
    if(k > f[n-2]){
        return solve(n-1, k-f[n-2]);
    }
    else return solve(n-2,k);
    
}


int main(){
    int n, k; cin >> n >> k;
    ktao();
    cout<<solve(n,k);
}
