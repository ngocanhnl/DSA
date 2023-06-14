#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}
int main(){
    int n, m; cin >> n ;
    int a[n], b[m];
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    cout<<s.size();
    
}
