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
    stringstream ss(s2);
    string t;
    set<string> se1, se2;
    while(ss >> t){
        se1.insert(t);
    }
    stringstream ss2(s1);
    while(ss2 >> t){
        if(se1.count(t)==0){
            se2.insert(t);
        }
    }
    for(auto it:se2) cout<<it<<' ';
}
