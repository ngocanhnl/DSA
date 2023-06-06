#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1000000];
int main(){
    int n, s; cin >> s >> n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    f[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=s; j>=a[i]; j--){
            if(f[j-a[i]]){
                f[j] = 1;
            }
        }
    }
    for(int i = s; i>=1; i--){
        if(f[i]>0){
            cout<<i;
            return 0;
        }
    }
}
