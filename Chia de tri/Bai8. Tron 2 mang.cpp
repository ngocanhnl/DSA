#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;


int main(){
    int n,m,k; cin >> n >> m >> k;
    int a[n], b[m];
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;
    vector<int> v;
    int l = 0, r = 0;
    while(l<n && r < m){
        if(a[l] <= b[r]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(b[r]);
            r++;
        }
    }
    for(int i = l; i<n; i++){
        v.push_back(a[i]);
    }
    for(int i = r; i<m; i++){
        v.push_back(b[i]);
    }
    cout<<v[k-1];
}
