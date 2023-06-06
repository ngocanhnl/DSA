#include<bits/stdc++.h>
using namespace std;

int n, m, dem=0;
vector<int> ke[1001];
queue <int> q;
bool visited[1001];
int nt=0, tmp=10000000;

void nhap(){
    cin >> n >> m;
    while(m--){
        int x, y;
        cin >> x >> y ;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void DFS(int u){
    visited[u]=true;
    if(ke[u].size()>nt||(ke[u].size()==nt&&u<tmp)){
        int k=ke[u].size();
        nt = max(nt,k);
        tmp = u;
    }
    for(auto x:ke[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    nhap();
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            nt = 0;
            tmp=i;
            DFS(i);
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end());
    for(int x:v) cout<<x<<' ';
}
