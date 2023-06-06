#include<bits/stdc++.h>
using namespace std;
bool visited[1010];
vector<int> v[1001];
int parent[1001];
void BFS(int i){
    queue <int> q;
    q.push(i);
    visited[i]=true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto it: v[x]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true;
                parent[it] = x;
            }
        }
    }
}

void DFS(int i){
    visited[i]= true;
    for(auto it:v[i]){
        if(!visited[it]){
        
            parent[it]=i;
            DFS(it);
        }
    }
}


int main(){
    int n, m, s, t;
    cin >> n >> m >> s >> t;    
    while(m--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(s);
    if(!visited[t]){
        cout<<-1;
    }
    else{
        vector<int> res;
        while( t != s){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        for(auto it = res.rbegin(); it != res.rend(); it++){
            cout<<*it<<' ';
        }
    }
    
}
