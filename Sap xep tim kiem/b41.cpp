#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    long long a[n];
    map<long long, int> mp;
    for(auto &x:a) cin >> x;
    int l = 0, dem=0;
    long long sum = 0;
    for(int r=0; r<n; r++){
        sum += a[r];
       
        if(sum == k){
            dem++;
        }
        if(mp.count(sum - k)){
            dem++;
        }
        
        mp[sum] = r;
    }
    cout<<dem;
}
