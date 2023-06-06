#include<bits/stdc++.h>
using namespace std;
long long f[1000000];
long long tinh(int n){
	if(n==0) return 0;
	if(f[n]!=0) return f[n];
	long long res = 1e9;
	int m = n;
	while(m){
		int r = m%10;
		if(r!=0){
			res = min(res,tinh(n-r)+1);
		}
		m/=10;
	}
	f[n] = res;
	return res;
}
int main(){
	int n; cin >> n;
	cout<<tinh(n);
}
