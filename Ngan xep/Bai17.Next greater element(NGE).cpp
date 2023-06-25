#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack<int> st;
    int a[n], v[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        v[i] = -1;
    }
    
    for(int i=0; i<n; i++){
        if(st.empty()) st.push(i);
        else{
            while(!st.empty()&&(a[i]>a[st.top()])){
                v[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    for(int i=0; i<n; i++) cout<<v[i]<<' ';
}
