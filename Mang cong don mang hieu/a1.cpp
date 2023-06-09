#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    multiset<int> s;
    for(int i=0; i<n+m; i++){
        int tmp; cin >> tmp;
        s.insert(tmp);
    }
    for(auto it:s) cout<<it<<' ';
}
