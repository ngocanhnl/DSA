#include<bits/stdc++.h>
using namespace std;

bool check(long long a[], long long n, long long k, long long tong){
    int dem = 0;
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum > tong){
            dem++;
            sum = a[i];
            if(dem > k) return false;
        }
    }
    dem++;
    return dem <= k;
}
int main(){
    long long n, k; cin >> n >> k;
    long long a[n];
    long long r=0;
    long long ans = 0;
    for(long long &x:a){
        cin >> x;
        r += x;
    
    }
    long long l = *(max_element(a,a+n));
    while(l <= r){
        long long m = (l+r)/2;
        if(check(a,n,k,m)){
            ans = m;
            r = m-1;
        }
        else l = m+1;
        
    }
    cout<<ans;
}
