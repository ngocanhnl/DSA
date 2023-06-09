#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int l =0, cnt = 0, res=-1e9;
    
    map<char,int> mp;
    for(int r=0; r<s.size(); r++){
        mp[s[r]]++;
        if(mp[s[r]] == 1){
            res = max(res, r-l+1);
        }
        else{
            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }
            
        }
    }
    cout<<res;
}
