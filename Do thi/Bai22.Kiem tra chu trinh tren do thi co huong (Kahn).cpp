#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1001];
int bbv[1001];
queue <int> q;
bool visited[1001];

void nhap(){
    cin >> n >> m;
    while(m--){
        int x, y;
        cin >> x >> y ;
        ke[x].push_back(y);
        bbv[y]++;
    }
}

void Kahn(){
    for(int i=1; i<=n; i++){
        if(bbv[i]==0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty()){
        int x = q.front(); q.pop();
        topo.push_back(x);
        for(auto y:ke[x]){
            bbv[y]--;
            if(bbv[y]==0){
                q.push(y);
            }    
        }
    }
    if(topo.size() != n){
        cout<<1;
    }
    else cout<<0;
}

int main(){
    nhap();
    Kahn();
}
