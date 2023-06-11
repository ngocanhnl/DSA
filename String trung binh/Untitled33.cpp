#include<bits/stdc++.h>
using namespace std;
long long r(string s, long long k){
    long long ru =0;
    for(int i=0; i<s.size(); i++){
        ru = (((ru%k)*10)%k + (s[i]-'0')%k)%k; 
    }
    return ru;
}
int main(){
    string a; cin >> a;
    long long b; cin >> b;
    while(b){
        long long tmp;
        tmp = b;
        b = r(a,b);
        a = to_string(tmp);
    }
    cout<<a;
    
}
