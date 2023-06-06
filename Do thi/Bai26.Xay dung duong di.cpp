#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int a[1001][1001];
int n, m;
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
    for(auto it:v[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
    
}

vector<int> v1;
int main(){
    nhap();
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            v1.push_back(i);
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt-1<<endl;
    for(int i=1; i<v1.size(); i++){
        cout<<v1[i-1]<<' '<<v1[i]<<endl;
    }
}
