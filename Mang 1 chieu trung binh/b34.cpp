#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    map<int, int> mp;
    int res = -1;
    for(int i=0; i<n; i++){
        if(mp.count(a[i]-k)){
            res = max(res, i - mp[a[i]-k] );
        }
        if(mp.count(a[i]+k)){
            res = max(res, i-mp[a[i] + k]);
        }
        if(mp.count(a[i])==0) mp[a[i]] = i;
    }
    cout<<res;
}
