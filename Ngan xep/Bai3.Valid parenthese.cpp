#include<bits/stdc++.h>
using namespace std;
bool check(char a, char b){
    if((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']')) return true;
    return false;
}

int main(){
    string s; cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && check(st.top(),s[i])) st.pop();
            else {
                cout<<"NO";
                return 0;
            }
        }
    }
    if(st.empty()) cout<<"YES";
    else cout<<"NO";
    
    
}
