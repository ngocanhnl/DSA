#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n;
    long long a[n];
    for(auto &x:a) cin >> x;
    map<int,int> mp;
    long long l = 0, dem = 0, ans = 0;
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        while(mp[a[r]] > 1){
            mp[a[l]]--;
            l++;
        }
        ans = max(ans, r-l+1);
    }
    
    cout<<ans;
}
