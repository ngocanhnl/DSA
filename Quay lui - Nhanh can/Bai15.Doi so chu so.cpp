#include<bits/stdc++.h>
using namespace std;
string s, res="0";
int dem = 0;

void ql(int i, string cur, int cnt){
	if(cnt>dem||i>s.size()) return;
	res = max(res,cur);
	char max_vl = cur[i];
	for(int j=i+1;j<s.size(); j++){
		max_vl = max(max_vl,cur[j]);
	}
	if(max_vl==cur[i]){
		ql(i+1,cur,cnt);
	}
	else{
		for(int j = i+1; j<s.size(); j++){
			if(cur[j]==max_vl){
				string tmp = cur;
				swap(tmp[i],tmp[j]);
				ql(i+1,tmp,cnt+1);
			}
		}
	}
}

int main(){
	cin >> dem;
	cin >> s;
	
	ql(0,s,0);
	cout<<res;
}




