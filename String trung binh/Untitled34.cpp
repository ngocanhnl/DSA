#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long r(string s, long long k){
    long long ru =0;
    for(int i=0; i<s.size(); i++){
        ru = (((ru%k)*10)%k + (s[i]-'0')%k)%k; 
    }
    return ru;
}
long long pow1(long long a, long long b){
    long long res = 1;
    while(b){
        if(b%2==1){
            res *= a;
            res%=mod;
        }
        b/=2;
        a*=a;
        a%=mod;
    }
    return res%mod;
}
int main(){
    string a; cin >> a;
    long long b; cin >> b;
    long long n = r(a,mod);
    cout<<pow1(n,b);
    
}
