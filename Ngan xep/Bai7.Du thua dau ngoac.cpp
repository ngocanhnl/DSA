#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') st.push(i);
        else if(s[i] == ')'){
            if(s[st.top()+1]=='('&&s[i-1]==')'){
                cout<<"YES";
                return 0;
            }
            else if(i-st.top()==2){
                cout<<"YES";
                return 0;
            }
            st.pop();
        } 
    }
    cout<<"NO";
}
