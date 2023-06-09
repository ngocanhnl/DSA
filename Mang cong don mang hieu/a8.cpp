#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    map<int, int > mp;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long ans = 0, l = 0;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                mp.erase(a[l]);
            }
            l++;
        }
        ans += i - l + 1;
    }
    cout<<ans;
}
