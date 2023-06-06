#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct job{
    ll bd, kt, v;
};
bool cmp(job a, job b){
    return a.kt < b.kt;
}
ll tim(job a[], int i ){
    ll res = -1;
    ll l=0, r=i-1;
    while(l<=r){
        ll m = (l+r)/2;
        if(a[m].kt < a[i].bd){
            res = m;
            l = m+1;
        }
        else {
            r = m-1;
        }
    }
    return res;
}
long long f[1000000];

int main(){
    ll n; cin >> n;
    job a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].bd >> a[i].kt >> a[i].v;
    }
    sort(a,a+n,cmp);
    f[0]=a[0].v;
    for(ll i=1; i<n; i++){
        ll tmp=tim(a,i);
        f[i]=a[i].v;
        if(tmp!=-1){
            f[i] = max(f[i-1],f[i]+f[tmp]);
        }
        else f[i] = max(f[i-1],f[i]);
        
    }
    cout<<*max_element(f,f+n);
    
}
