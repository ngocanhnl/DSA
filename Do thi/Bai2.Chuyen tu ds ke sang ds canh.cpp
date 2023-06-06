#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	vector<int> v[n+1];
	for(int i=1; i<=m; i++){
		int s1,s2;
		cin >> s1 >> s2;
		v[s1].push_back(s2);
	} 
	for(int i=1; i<=n; i++){
		sort(v[i].begin(),v[i].end());
		cout<<i<<": ";
		for(int it:v[i]){
			cout<<it<<' ';
		}
		cout<<endl;
	}
}
