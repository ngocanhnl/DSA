#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map<int,int> mp;
    set<int> se;
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> a[i];
        se.insert(a[i]);
        s.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
        mp[b[i]]++;
        s.insert(b[i]);
    }
    for(auto it:se){
        if(mp[it]) cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:s){
        cout<<it<<' ';
    }
    
    
    
    
}
