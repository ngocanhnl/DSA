#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}
int main(){
    long long n, s; cin >> n >> s;
    pair<int,int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        if(s > a[i].first){
            s += a[i].second;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
}
