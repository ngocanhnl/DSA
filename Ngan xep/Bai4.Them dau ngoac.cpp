#include<bits/stdc++.h>
using namespace std;
int res(string s){
    stack<char> st;
    int dem = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push('(');
        else{
            if(st.empty()) dem++;
            else st.pop();
        }
    }
    int t = st.size();
    return t + dem;
}

int main(){
    string s; cin >> s;
    cout<<res(s);
    
    
}
