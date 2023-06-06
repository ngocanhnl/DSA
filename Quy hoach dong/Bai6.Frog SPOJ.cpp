#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1000000];
int main(){
    int n; cin >> n;
    f[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            if(i>=j){
                f[i] += f[i-j];
            }
        }
    }
    cout<<f[n];
}
