#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int a[1001][1001];
int n, m, dem=0;
void nhap(){
    cin >> n >> m;
    while(m--){
        int s1, s2; cin >> s1 >> s2;
        v[s2].push_back(s1);
        v[s1].push_back(s2);
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
}

void DFS(int u){
    visited[u] = true;
    dem++;
    for(auto it:v[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
    
}

int main(){
    nhap();
    int ans = 0;
    for(int i=1; i<=n; i++){
        dem=0;
        if(!visited[i]){
            DFS(i);
            ans = max(ans,dem);
        }
    }
    cout<<ans;
}
