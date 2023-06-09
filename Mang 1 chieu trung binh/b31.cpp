#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n ;
    long long a[n];
    for(long long &x:a) cin >> x;
    sort(a,a+n);
    long long max1=0;
    for(int i=0; i<n-1; i++){
        if(abs(a[i]+a[i+1])>max1){
            max1 = abs(a[i]+a[i+1]);
        }
    }
    max1 = max(max1,abs(a[n-1]+a[0]));
    cout<<max1;
}
