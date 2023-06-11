#include<bits/stdc++.h>
using namespace std;
bool check1(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] != '2'&&s[i] != '3'&&s[i] != '5'&&s[i] != '7') return false;
    }
    return true;
}
bool check2(long long s){
    if(s<2) return false;
    for(int i=2; i<=sqrt(s); i++){
        if(s%i==0) return false;
    }
    return true;
}
long long su(string s){
    long long sum = 0;
    for(int i=0; i<s.size();i++){
        int tmp;
        string t = "";
        t+=s[i];
        tmp = stoi(t);
        sum += tmp;
    }
    return sum;
}
int main(){
    string s;
    cin >> s;
    if(check1(s)&&check2(su(s))) cout<<"YES";
    else cout<<"NO";
    
}
