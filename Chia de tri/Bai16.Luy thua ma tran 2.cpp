#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
using ll = long long;
int n;
struct matran{
    ll f[11][11];
};

matran operator * (matran a, matran b){
    matran c;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c.f[i][j]=0;
            for(int k=0; k<n; k++){
                c.f[i][j] += a.f[i][k]*b.f[k][j] % mod;
                c.f[i][j] %=mod;
            }
        }
    }
    return c;
}

matran binPow(matran a, int n){
    if(n==1) return a;
    matran x = binPow(a,n/2);
    if(n%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int k;
    cin >> n >> k;
    matran a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a.f[i][j];
        }
    }
    matran res = binPow(a,k);
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += res.f[i][n-1];
        sum %=mod;
    }
    cout<<sum;
}
