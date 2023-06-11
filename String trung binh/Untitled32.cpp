#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    long long k; cin >> k;
    long long r =0;
    for(int i=0; i<s.size(); i++){
        r = (((r%k)*10)%k + (s[i]-'0')%k)%k; 
    }
    cout<<r;
    
}
