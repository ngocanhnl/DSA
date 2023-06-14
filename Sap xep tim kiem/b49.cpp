#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], int n, int k, double lent){
    long long dem =0;
    for(int i=0; i<n; i++){
        dem += (int)(a[i]/lent);
    }
    return dem >= k;
}
int main(){
    int n, k;
    cin >> n >> k;
    long long a[n];
    for(auto &x:a) cin >> x;
    double l=0, r=9e18;
    double ans = -1;
    for(int i=0; i<=100; i++){
        double m = (l+r)/2;
        if(check(a,n,k,m)){
            ans = m;
            l = m;
        }
        else r = m;
    }
    cout<<fixed<<setprecision(6)<<ans;
}
