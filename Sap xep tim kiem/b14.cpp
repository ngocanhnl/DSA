#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    sort(a,a+n,greater<int>());
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(a[i]-i<=0) break;
        sum += a[i]-i;
    }
    cout<<sum;
}
