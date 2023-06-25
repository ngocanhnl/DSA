#include<bits/stdc++.h>
using namespace std;
bool check(char x){
    return x=='+'||x=='-'||x=='*'||x=='/';
}
int main(){ 
    string s; cin >> s;
    stack<string> st;
    for(int i=s.size()-1; i>=0; i--){
        if(isalpha(s[i])){
            string t = string(1,s[i]);
            st.push(t);
        }
        else{
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string res = a  + b + s[i];
            st.push(res);
        }
    }
    cout<<st.top();
    
   
}
