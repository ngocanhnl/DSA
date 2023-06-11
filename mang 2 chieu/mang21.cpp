#include<bits/stdc++.h>
using namespace std;
bool check(long long a){
    if(a<2) return false;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int n, m; cin >> n >> m;
    long long a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(check(a[i][j])) cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
