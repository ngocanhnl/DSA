#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;

int solve(int a[], int b[], int n){
    int l = 0, r = n-2, res = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==b[mid]){
            l =mid+1;
        }
        else{
            res = mid+1;
            r = mid - 1;
        }
    }
    return res;
}
int main(){
    int n,m,k; cin >> n ;
    int a[n], b[n-1];
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;
    cout<<solve(a,b,n);
    
}
