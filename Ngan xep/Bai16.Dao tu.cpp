
#include<bits/stdc++.h>
using namespace std;

int main(){
    string tmp;
    stack<string> st;
    while(cin >> tmp){
        st.push(tmp);
    }
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
}

