#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    stack<int> st;
    while(n--){
        string tmp;
        cin >> tmp;
        if(tmp=="top"){
            if(!st.empty()){
                int a = st.top(); cout<<a;
            }
            else cout<<"NONE";
            cout<<endl;
        }
        else if(tmp=="push"){
            int a; cin >> a;
            st.push(a);
        }
        else{
            if(!st.empty()) st.pop();
        }
    }
    
    
}
