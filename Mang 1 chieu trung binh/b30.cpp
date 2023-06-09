#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    long long a[n];
    for(long long &x:a) cin >> x;
    sort(a,a+n);
    long long s1=0, s2=0;
    if(k<n-k){
        for(int i=0; i<k;i++) s1+=a[i];
        for(int i=k; i<n; i++) s2 +=a[i];
        cout<<s2-s1;
        
    }
    else{
        for(int i=0; i<n-k; i++) s1 += a[i];
        for(int i=n-k; i<n; i++) s2 +=a[i];
        cout<<s2-s1;
    }
}
