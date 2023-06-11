#include<bits/stdc++.h>
using namespace std;

bool check1(string s){
    int n = s.size();
    string tmp="";
    if(n>1){
    tmp += s[n-2];
    tmp += s[n-1];
    int t = stoi(tmp);
    if(t%4==0) return true;
    }
    else{
    
    if(n==1&&(s[0]-'0')%4==0) return true;
    
}
    return false;
}

int main(){
    string s;
    cin >> s;
    if(check1(s)) cout<<"YES";
    else cout<<"NO";
    
}
