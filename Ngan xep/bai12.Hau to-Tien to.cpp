#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, res = ""; cin >> s;
    stack<string> st;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string tmp = s[i] + b + a;
            st.push(tmp);
        }
    }
    cout<<st.top();
}
