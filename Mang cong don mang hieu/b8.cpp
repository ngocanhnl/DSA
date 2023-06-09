#include<bits/stdc++.h>
using namespace std;
const int maxvl = 10e5 + 5;
long long l[maxvl], r[maxvl], value[maxvl];
long long diff[maxvl], query[maxvl];
int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=m; i++){
        cin >> l[i] >> r[i] >> value[i];
    }
    // tinh tan suat cac thao tac tren 1 don vi
    for(int i=1; i<=k; i++){
        int x, y; cin >> x >> y;
        diff[x] ++;
        diff[y+1]--; 
    }
    // tinh phan tu se duoc them vao dua tren tan suat
    for(int i=1; i<=m; i++){
        diff[i] += diff[i-1];
        query[l[i]] += diff[i] * value[i];
        query[r[i] + 1] -= diff[i] * value[i];
    }
    
    for(int i=1; i<=n; i++){
        query[i] += query[i-1];
        cout<<a[i]+query[i]<<' ';
    }
    
}
