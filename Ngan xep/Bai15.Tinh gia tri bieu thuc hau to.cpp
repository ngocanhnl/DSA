
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, res = ""; cin >> s;
    stack<long long> st;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            st.push(stoi(string(1,s[i])));
        }
        else{
            long long a = st.top(); st.pop();
            long long b = st.top(); st.pop();
            long long tmp;
            if(s[i]=='+') tmp = a + b;
            else if(s[i]=='-') tmp = b-a;
            else if(s[i]=='*') tmp = a * b;
            else tmp = b/a;
            st.push(tmp);
        }
    }
    cout<<st.top();
}

