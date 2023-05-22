#include<bits/stdc++.h>
using namespace std;
string tmp ="()[]{}", s;
int n;
bool check(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            char y = st.top();
            st.pop();
            if((s[i]=='}'&&y!='{')||(s[i]==']'&&y!='[')||(s[i]==')'&&y!='(')) return false;
        }
    }
    if(st.empty()) return true;
    return false;
}
vector<string> v;
void ql(){
    for(int j=0; j<tmp.size(); j++){
        s += tmp[j];
        if(s.size()==n){
            if(check(s)){
                v.push_back(s);
            }
        }
        else ql();
        s.pop_back();
    }
}

int main(){
    cin >> n;
    ql();
    if(n%2==1){
        cout<<"NOT FOUND";
    }
    else{
    
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<' ';
    }
}
}
