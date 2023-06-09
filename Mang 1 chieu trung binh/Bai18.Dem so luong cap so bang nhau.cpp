#include<bits/stdc++.h>
using namespace std;
long long C(long long n){
    return (n*(n-1))/2;
}
int main(){
    long long n; cin >> n;
    long long a[n];
    map<long long,long long> mp;
    for(long long &x:a){
        cin >> x;
        mp[x]++;    
    }
    long long dem = 0;
    for(auto it:mp){
        dem += C(it.second);
    }
    cout<<dem;
    
    
}
