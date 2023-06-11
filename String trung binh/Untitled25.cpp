#include<bits/stdc++.h>
using namespace std;
long long sum(string s){
    long long sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += (s[i]-'0');
    }
    return sum;
}
bool check1(string s){
    int n = s.size();
    if((s[n-1]-'0')%2 != 0) return false;
    if(sum(s) % 3 != 0 ) return false;
    return true;
}

int main(){
    string s;
    cin >> s;
    if(check1(s)) cout<<"YES";
    else cout<<"NO";
    
}
