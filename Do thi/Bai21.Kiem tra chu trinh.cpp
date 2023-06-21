#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
int n, m;
void nhap(){
    cin >> n >> m;
    while(m--){
        int s1, s2;
        cin >> s1 >> s2;
        ke[s1].push_back(s2);
        ke[s2].push_back(s1);
    }
    for(int i=1; i<=n; i++){
        sort(ke[i].begin(),ke[i].end());
    }
}

bool DFS(int u){
    visited[u] = true;
    for(auto x:ke[u]){
        if(!visited[x]){
            parent[x]=u;
            if(DFS(x)){
                return true;
            }
        }
        else if(x != parent[u]){
            return true;
        }
    }
    return false;
}
//bool BFS(int u){
//    queue<int> q;
//    visited[u]=true;
//    
//}



int main(){
    nhap();
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(DFS(i)){
                cout<<"1";
                return 0;
            }
        }
    }
    cout<<"0";
}
