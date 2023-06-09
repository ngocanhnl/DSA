#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool check(int n){
    int res = n%10;
    n/=10;
    while(n){
        if(res < n%10) return false;
        res = n%10;
        n/=10;
    }
    return true;
}
bool cmp(int a, int b){
    if(mp[a] != mp[b]) return mp[a]>mp[b];
    return a<b;
}
int main(){
    int n; 
    vector<int> v;
    while(cin >> n){
        if(check(n)){
            if(mp[n]==0){
                v.push_back(n);
            }
            mp[n]++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it: v){
        cout<<it<<' '<<mp[it]<<endl;
    }
    
    
}
