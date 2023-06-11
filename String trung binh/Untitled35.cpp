#include<bits/stdc++.h>
using namespace std;
long long mod1 = 1e9+7, mod2=4;
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
            res%=mod2;
        }
        b/=2;
        a*=a;
        a%=mod2;
    }
    return res%mod2;
}
int main(){
    string a; cin >> a;
    long long b = 2008;
    long long n = r(a,mod2);
    if(n%4==1) cout<<"8";
    else if(n%4==2) cout<<"4";
    else if(n%4==3) cout<<"2";
    else cout<<"6";
    
}
