#include<bits/stdc++.h>
using namespace std;
//bool check(int a, int b, int n, int k){
//    long long sum = 0;
//    sum = k/a * k/b;
//    return k >= n;
//}
int main(){
    long long a, b, n; cin >> a >> b >> n;
    long long ans;
    long long l=0, r = max(a,b)*n;
    while(l <= r){
        long long m = (r+l)/2;
        long long x = m/a;
        long long y = m/b;
        
        if(x*y>=n){
            ans = m;
            r = m-1;
        }
        else l=m+1;
    }
    cout<<ans;
}
