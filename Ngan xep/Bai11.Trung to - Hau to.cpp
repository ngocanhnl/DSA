#include<bits/stdc++.h>
using namespace std;

int ut(char x){
    if(x == '+'||x=='-') return 1;
    else if(x=='*'|| x=='/')return 2;
    return 0;
}


int main(){
    string s, res = ""; cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            res += s[i];
        }
        else if(s[i]=='(') st.push('(');
        else if(s[i]==')'){
            while( st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();    
        }
        else{
            while(!st.empty() && ut(st.top())>=ut(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while( !st.empty()){
        res += st.top();
        st.pop();
    }
    cout<<res;
}
