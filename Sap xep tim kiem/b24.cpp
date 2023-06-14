#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    long long n, k; cin >> n >> k;

    long long a[n];
    for(long long &x:a){
        cin >> x;
    }
    sort(a+1,a+n, greater<int>());
    long long sum = 0;
    for(int i=0; i<=k; i++){
        sum += a[i];
    }
    for(int i= k + 1; i<n; i++){
        sum -= a[i];
    }
    cout<<sum;
}
