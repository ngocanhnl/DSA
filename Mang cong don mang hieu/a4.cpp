#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    long long sum = 0, l=0, res=0;
    for(int r=0; r<n; r++){
        sum += a[r];
        while(sum > k){
            sum -= a[l];
            l++;
        }
        res = max(res, r-l+1);
    }
    cout<<res;
}
