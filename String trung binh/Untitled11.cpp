#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    for(char &x:s1){
        x = tolower(x);
    }
    for(char &x:s2){
        x = tolower(x);
    }
    stringstream ss(s1);
    string t;
    set<string> s;
    while(ss >> t){
        s.insert(t);
    }
    set<string> se;
    stringstream ss2(s2);
    while(ss2 >> t){
        if(s.count(t)){
            se.insert(t);
        }
    }
    for(auto it:se){
        cout<<it<<' ';
    }
}
