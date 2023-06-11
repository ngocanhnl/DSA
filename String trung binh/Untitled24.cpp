#include<bits/stdc++.h>
using namespace std;
bool check1(string s){
    for(int i=1; i<s.size(); i++){
        if( (s[i]-'0') > (s[i-1]-'0')) return false;
    }
    return true;
}
bool check2(string s){
    for(int i=1; i<s.size(); i++){
        if( (s[i]-'0') < (s[i-1]-'0')) return false;
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    if(check1(s)||check2(s)) cout<<"YES";
    else cout<<"NO";
    
}
