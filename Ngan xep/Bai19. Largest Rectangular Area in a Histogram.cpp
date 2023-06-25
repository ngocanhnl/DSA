#include<bits/stdc++.h>
using namespace std;
void left(int a[], int n, int l[]){
    stack<int> st;
    for(int i = n-1; i>=0; i--){
        while(!st.empty() && a[i] < a[st.top()]){
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        l[st.top()] = -1;
        st.pop();
    }
    
}
void ri(int a[], int n, int r[]){
    stack<int> st;
    for(int i = 0; i<n; i++){
        while(!st.empty() && a[i] < a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()] = n;
        st.pop();
    }
    
}
int main(){
    int n; cin >> n;
    stack<int> st;
    int a[n], l[n], r[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    left(a,n,l);
    ri(a,n,r);
    long long res = 0;
    for(int i=0; i<n; i++){
        int w = r[i] - l[i] - 1;
        long long dt = 1ll * a[i]*w;
        res = max(res,dt);
    }
    cout<<res;
    
    
}
