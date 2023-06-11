#include<bits/stdc++.h>
using namespace std;

bool sum(string s){
    long long sum =0, lt=1;
    for(int i=s.size()-1; i>=0; i--){
        sum += (s[i]-'0')*lt;
        lt *=2;
        sum%=5;
        lt %=5;
    }
    if(sum == 0) return true;
    return false;
}
int main(){
    string s;
    cin >> s;
    if(sum(s)) cout<<"YES";
    else cout<<"NO";
    
}
