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
        if(*(it)==k-a[i]){
            auto it2 = upper_bound(a+i+1, a+n, k-a[i]);
            it2--;
            sum += it2 - a - (it -a) + 1;
            
        }
    }
    cout<<sum;
}
