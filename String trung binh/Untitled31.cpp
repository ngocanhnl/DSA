#include<bits/stdc++.h>
using namespace std;

bool sum(string s, int k){
    int n = s.size();
    for(int i=n-1; i>=n-k; i--){
        if(s[i]=='1'){
           return false;
        }
    }
    return true;
    
}
int main(){
    string s; cin >> s;
    int k; cin >> k;
    
    if(sum(s,k)) cout<<"YES";
    else cout<<"NO";
    
}
