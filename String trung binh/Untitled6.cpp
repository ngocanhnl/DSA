#include<bits/stdc++.h>
using namespace std;
void chuanhoaten(string &s){
    string t;
    stringstream ss(s);
    string ten="";
    while(ss >> t){
        for(int i=0; i<t.size(); i++){
            if(i==0){
                t[0] = toupper(t[0]);
            }
            else{
                t[i] = tolower(t[i]);
            }
        }
        ten += t;
        ten += " ";
    }
    ten.pop_back();
    s = ten;
    
}
void ns(string &t){
    if(t[2] != '/') t = "0" + t;
    if(t[5] !='/') t.insert(3,"0");
}
int main(){
    string s,t ;
    getline(cin,s);
    getline(cin,t);
    chuanhoaten(s);
    ns(t);
    cout<<s<<endl<<t;
    
}
