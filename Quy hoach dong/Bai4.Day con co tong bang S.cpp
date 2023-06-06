#include<bits/stdc++.h>
using namespace std;

int f[1000000];
int main(){
    int n, s; cin >> n >> s;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    f[0]=1;
    for(int i=1; i<=n; i++){
        for(int j = s; j>=a[i]; j--){
            if(f[j-a[i]]){
                f[j] = 1;
            }
        }
    }
    cout<<f[s];
}
