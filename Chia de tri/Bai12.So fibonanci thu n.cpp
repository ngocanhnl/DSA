#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
using ll = long long;
struct matrix{
    ll f[2][2];
};

matrix operator *(matrix a, matrix b){
    matrix c;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c.f[i][j] = 0;
            for(int k=0; k<2; k++){
                c.f[i][j] += (a.f[i][k]*b.f[k][j]) % mod;
            }
            c.f[i][j]%=mod;
        }
    }
    return c;
}

matrix binPow(matrix a, ll n){
    if(n==1){
        return a;
    }
    matrix c = binPow(a,n/2);
    if(n%2==0){
        return  c*c;
    }
    else return c*c*a;
}
int main(){
    ll n; cin >> n;
    matrix a;
    a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
    a.f[1][1] = 0;
    matrix res = binPow(a,n);
    cout<<res.f[0][1];
}
