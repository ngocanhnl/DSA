#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1000001];
int main(){
    int n; cin >> n;
    int res = 0;
    long long s = (n+1)*n/2;
    f[0]=1;
    if(s%2==0){
        s/=2;
        for(int i=1; i<=n; i++){
            for(int j=s; j>=1; j--){
                if(j>=i){
                    f[j] += f[j-i];
                    if(j==s && i==n){
                        res = f[j-i];
                    }
                    f[j] %= mod;
                }
            }
        }
        cout<<res;
    }
    else cout<<0;
}
