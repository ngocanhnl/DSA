#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    int f[n+1];
    for(int i=0; i<n; i++){
        f[i] = a[i];
        for(int j=0; j<i; j++){
            if(a[i] > a[j]){
                f[i] = max(f[i], f[j]+a[i]);
            }
        }
    }
    cout<<*max_element(f,f+n);
}
