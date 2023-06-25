#include<bits/stdc++.h>
using namespace std;

void ri(int a[], int n, int r[]){
    stack<int> st;
    for(int i = 0; i<n; i++){
        while(!st.empty() && a[i] > a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()] = -1;
        st.pop();
    }
    
}
void le(int a[], int n, int l[]){
    stack<int> st;
    for(int i = 0; i<n; i++){
        while(!st.empty() && a[i] < a[st.top()]){
            l[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        l[st.top()] = -1;
        st.pop();
    }
    
}



int main(){
    int n; cin >> n;
    stack<int> st;
    int a[n], r[n], l[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    ri(a,n,r);
    le(a,n,l);
    for(int i=0; i<n; i++){
        if(r[i]==-1) cout<<"-1 ";
        else cout<<l[r[i]]<<' ';
    }
    
    
    
}
