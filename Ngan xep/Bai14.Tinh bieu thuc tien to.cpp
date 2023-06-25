
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, res = ""; cin >> s;
    stack<int> st;
    for(int i=s.size()-1; i>=0; i--){
        if(isdigit(s[i])){
            st.push(stoi(string(1,s[i])));
        }
        else{
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            int tmp;
            if(s[i]=='+') tmp = a + b;
            else if(s[i]=='-') tmp = a-b;
            else if(s[i]=='*') tmp = a * b;
            else tmp = a/b;
            st.push(tmp);
        }
    }
    cout<<st.top();
}

