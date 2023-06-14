#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k; cin >> n >> k;
    long long a[n];
    for(long long &x:a) cin >> x;
    sort(a,a+n);
    long long sum = 0;
    for(int i=0; i<n; i++){
        auto it = lower_bound(a+i+1,a+n,k-a[i]);
            sum += it - 1 -a - (i + 1) + 1;
            
        }
    cout<<sum;
}
