#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int s = 0;
    for(int &x:a){
        cin >> x;
        s += x;
    }
    int f[s+1]={0};
    f[0]=1;
    for(int i=0; i<n; i++){
        for(int j=s; j>=a[i]; j--){
            if(f[j-a[i]]){
                f[j] = 1;
            }
        }
    }
    for(int i=0; i<=s; i++){
        if(f[i]) cout<<i<<' ';
    }
}
