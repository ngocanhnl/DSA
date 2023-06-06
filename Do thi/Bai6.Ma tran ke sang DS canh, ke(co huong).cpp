#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second<b.second;
}
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    vector<pair<int,int>> v;
    vector<int> g[n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                v.push_back({i,j});
                g[i].push_back(j);
            }    
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        cout<<it.first<<' '<<it.second<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n; i++){
        cout<<i<<" : ";
        for( int x:g[i]){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    
}
