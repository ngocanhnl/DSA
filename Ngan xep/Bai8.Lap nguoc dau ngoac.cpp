#include<bits/stdc++.h>
using namespace std;

int main(){
    int k; 
    string s; cin >> s;
    stack<char> st;
    int dem = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()){
                dem++;
                st.push('(');
            }
            else st.pop();
        }
    }
    dem += st.size()/2;
    cout<<dem;
   
}
