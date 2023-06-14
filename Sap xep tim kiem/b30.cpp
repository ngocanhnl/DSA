#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    long long n, k; cin >> n >> k;
    long long a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    } 
    sort(a,a+n);
    double max_dis=0;
    for(int i=1; i<n; i++){
        max_dis = max(max_dis,(((double)a[i]-a[i-1])/2));
    }
    max_dis = max(max_dis, (double)k - a[n-1]);
    cout<<fixed<<setprecision(10)<<(double)max_dis;
    
}
