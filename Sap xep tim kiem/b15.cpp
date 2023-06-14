#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    sort(a,a+n);
    long long sum = 0, dem = 1;
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1] > k) dem++;
    }
    cout<<dem;
}
