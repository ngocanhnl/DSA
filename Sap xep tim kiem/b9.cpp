#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

bool binsearcch(int a[], int n, int x){
    int l = 0, r= n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x) return true;
        else if(a[mid] < x){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return false;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    int q; cin >> q;
    while(q--){
        int tmp; cin >> tmp;
        if(binsearcch(a,n,tmp)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
