#include<bits/stdc++.h>
using namespace std;

int f[1005];
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        f[i]=1;
        for(int j=1; j<i; j++){
            if(a[i] > a[j]){
                f[i] = max(f[i],f[j]+1);
            }            
        }
    }
    cout<<n-*(max_element(f,f+n+1));
}
