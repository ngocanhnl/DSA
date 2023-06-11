#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] != s[s.size()-i-1]){
            return false;
        }
        
    }
    return true;
}
bool check2(string s){
    bool six=false, one =false;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') one = true;
        if(s[i]=='6') six = true;
    }
    if(one&&six) return true;
    return false;
}
int main(){
    string s;
    cin >> s;
    if(check(s)&&check2(s)) cout<<"YES";
    else cout<<"NO";
    
}
