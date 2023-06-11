#include<bits/stdc++.h>
using namespace std;
void chuanhoaten(string &s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
void up(string &s){
    for(int i=0; i<s.size(); i++){
        s[i] = toupper(s[i]);
    }
}
void ns(string &t){
    if(t[2] != '/') t = "0" + t;
    if(t[5] !='/') t.insert(3,"0");
}
int main(){
    string s,t ;
    vector<string> v;
    while(cin >> s){
        v.push_back(s);
    }
    for(auto it=v.begin(); it != v.end(); it++){
        if(it != v.end()-1){
            chuanhoaten(*it);
        }
        else{
            up(*it);
        }
    }

    
    for(auto it=v.begin(); it != v.end(); it++){
        if(it==v.end()-2){
            cout<<*it<<", ";
        }
        else{
            cout<<*it<<' ';
        }
    }
    cout<<endl;
    cout<<*(v.end()-1)<<", ";
    for(auto i=v.begin(); i!=v.end()-1; i++){
        cout<<*i<<' ';
    }
    
    
}
