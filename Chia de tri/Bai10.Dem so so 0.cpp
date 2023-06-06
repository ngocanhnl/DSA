#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;

int solve(int a[],  int n){
    int l =0, r = n-1, res = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid]==1){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    cout<<solve(a,n);
    
}
