#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    int n, m; cin >> n >> m;
    int b[n], c[m];
    for(auto &x:b) cin >> x;
    for(auto &x:c) cin >> x;
    sort(b,b+n);
    sort(c,c+m);
    int l=0, r=0;
    while(l<n && r < m){
        if(b[l] <= c[r]){
            cout<<"b"<<l+1<<' ';
            l++;
        }
        else{
            cout<<"c"<<r+1<<' ';
            r++;
        }
    }
  
    if(l != n){
        while(l<n){
            cout<<"b"<<l+1<<" ";
            l++;
        }
    }
    if(r != m){
        while(r<m){
            cout<<"c"<<r+1<<' ';
            r++;
        }
    }
}
