#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;
    
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{    
            if(st.top()==s[i]){
                while(!st.empty() && st.top()==s[i]){
                    st.pop();
                }
            }
            else st.push(s[i]);
        }
    
    }
    string res="";
    while(!st.empty()){
        char x = st.top();
        string ss = string(1,x);
        res = ss + res;
        st.pop();
    }
    if(res!="") cout<<res;
    else cout<<"EMPTY";
    
    
}
