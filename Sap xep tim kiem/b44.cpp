#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    long long a[n];
    for(auto &x:a) cin >> x;
    map<int,int> mp;
    long long l = 0, dem = 0;
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                mp.erase(a[l]);
            }
            l++;
        }
        dem += r - l + 1;
    }
    cout<<dem;
}
