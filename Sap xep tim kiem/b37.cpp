#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    while(n--){
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        v.push_back({tmp1,1});
        v.push_back({tmp2,-1});
    }
    sort(v.begin(), v.end(), cmp);
    int sum = 0, max_pp=0;
    for(auto it: v){
        
        sum += it.second;
        max_pp = max(sum, max_pp);
        
    }
    cout<<max_pp;
    
}
