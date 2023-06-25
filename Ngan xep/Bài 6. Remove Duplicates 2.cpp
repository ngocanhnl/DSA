#include<bits/stdc++.h>
using namespace std;

int main(){
    int k; 
    string s; cin >> s >> k;
    stack<char> st;
    int dem = 1;
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            dem=1;
            st.push(s[i]);
        }
        else{    
            if(st.top()==s[i]){
                dem++;
                st.push(s[i]);
                if(dem==k){
                    while( dem != 0){
                        
                        st.pop();
                        dem--;
                    }
                    dem=1;
                }
            }
            else{
                st.push(s[i]);
                dem = 1;
            }
        }
    }
 
    string res="";
    while(!st.empty()){
        char x = st.top();
        string ss = string(1,x);
        res = ss + res;
        st.pop();
    }
    if(res!="") cout<<res;
    else cout<<"EMPTY";
    
    
}
