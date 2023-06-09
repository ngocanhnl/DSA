#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    map<char,int> mp;
    set<int> se;
    for(char x:s){
        se.insert(x);
    }
    int n = se.size();
    int cnt = 0, l = 0, ans = INT_MAX;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        if(mp[s[i]]==1) cnt++;
        while(cnt == n){
            ans = min(ans, i-l+1);
            mp[s[l]]--;
            if(mp[s[l]]==0) cnt--;
            l++;
        }
    }
    cout<<ans;
}
