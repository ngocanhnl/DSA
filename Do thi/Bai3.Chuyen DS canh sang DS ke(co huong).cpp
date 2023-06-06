#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.first!=b.first) return a.first<b.first;
	return a.second<b.second;
}
int main(){
	int n; cin >> n;
	cin.ignore();
	vector<pair<int,int>> v;
	for(int i=1; i<=n; i++){
		string tmp;
		getline(cin,tmp);
		string s;
		stringstream ss(tmp);
		while(ss>>s){
			v.push_back({i,stoi(s)});
		}
	} 
	sort(v.begin(),v.end(),cmp);
	for(auto it:v){
		cout<<it.first<<' '<<it.second<<endl;
	}

}
