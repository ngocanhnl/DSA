#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> v;;
    long long sum =0 ;int maxs = INT_MAX;
    for(int i=0; i<n; i++){
        sum += a[i];
        v.push_back(a[i]);
        if(sum>=m){
            while(sum>=m){
                int k = v.size();
                maxs = min(maxs,k);
                sum -= v[0];
                v.erase(v.begin());
            }
        }
    
    }
    if(maxs != INT_MAX)
    cout<<maxs;
    else cout<<"-1";
    
}
