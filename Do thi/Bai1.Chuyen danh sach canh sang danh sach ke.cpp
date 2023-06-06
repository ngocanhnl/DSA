#include<bits/stdc++.h>
using namespace std;
int g[1005][1005];
vector<int> a[1005];
int main(){
    int n, m; cin >> n >> m;
    int tmp = m;
    while(tmp--){
        int s1,s2;
        cin >> s1 >> s2;
        a[s1].push_back(s2);
        a[s2].push_back(s1);
    }
    for(int i=1; i<=n; i++){
        int t = a[i].size();
        sort(a[i].begin(),a[i].end());
    }
    for(int i=1; i<=n;i++){
        cout<<i<<" : ";
        for(auto it:a[i]){
            cout<<it<<' ';
        }
        cout<<endl;
    }
}
