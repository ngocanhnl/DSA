#include<bits/stdc++.h>
using namespace std;
bool visited[1010];
vector <int> v[1001];
int n, m, s, t;
vector<pair<int,int>> p;
void DFS(int u, int s, int t){
	visited[u]= true;
	for(auto it:v[u]){
		if((u==s&&it==t)||(u==t&&it==s)){
			continue;
		}
		if(!visited[it]){
			DFS(it,s,t);
		}
	}
}

int tplt(int s, int t){
	int dem=1;
	for(int i=1; i<=n;i++){
		if(!visited[i]){	
			DFS(i,s,t);
			dem++;
		}
	}
	return dem;
}

int main(){
	cin >> n >> m;	
	while(m--){
		int x, y; cin >> x >> y;
		p.push_back({x,y});
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		sort(v[i].begin(),v[i].end());
	}
	int cc = tplt(0,0);
	int res = 0;
	for(auto it:p){
		int x = it.first, y = it.second;
		memset(visited,false,sizeof(visited));
		if(cc < tplt(x,y)){
			res++;
		}
	}
	cout<<res;

	
}
