#include<bits/stdc++.h>
using namespace std;
bool visited[1010];vector<int> v[1001];
void BFS(int i){
    queue <int> q;
    q.push(i);
    visited[i]=true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<<x<<' ';
        for(auto it: v[x]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true;
            }
        }
    }
}


int main(){
    int n, m, s;
    cin >> n >> m >> s;
    
    while(m--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
    BFS(s);
    
}
