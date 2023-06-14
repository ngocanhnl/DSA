#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k; cin >> n >> k;
    long long a[n];
    map<long long, int> mp;
    for(auto &x:a) cin >> x;
    long long l = 0, dem=0;
    long long sum = 0;
    mp[0]=1;
    for(int r=0; r<n; r++){
        sum += a[r];
        dem += mp[sum - k]; 
        mp[sum] ++;
    }
    cout<<dem;
}
