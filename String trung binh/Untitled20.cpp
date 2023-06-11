#include<bits/stdc++.h>
using namespace std;
bool cmp(string a , string b){
    string x = a+b;
    string y = b+a;
    return x > y;
}
int main(){
    long long sum=0;
    string s;
    cin >> s;
    for(char &x:s){
        if(isdigit(x)==false) x = ' ';
    }
    stringstream ss(s);
    string t;
    vector<string > v;
    while(ss >> t){
        while(t[0]=='0'&&t.size()>1){
            t.erase(0,1);
        }
        v.push_back(t);
    }
    sort(v.begin(), v.end(),cmp);
    for(auto it:v) cout<<it;
    
}
