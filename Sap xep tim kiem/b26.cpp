#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(pair<int,int> a, pair<int,int> b ){
    if(a.first != b.first ) return a.first < b.first;
    return a.second < b.second;
}
int main(){
    long long n, k; cin >> n >> k;
    long long a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    bool check = false;
    for(int i=0; i<n; i++){
        auto it = lower_bound(a+i+1,a+n, k + a[i]);
        if(*it==k+a[i]){
            check = true;
            break;
        }
        
    }
    if(check) cout<<1;
    else cout<<-1;
    
}
