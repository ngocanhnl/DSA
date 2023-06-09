#include<bits/stdc++.h>
using namespace std;
int d[200005], f[200005];
int main(){
    int n, k, q; cin >> n >> k >> q;
    while(n--){
        int l, r; cin >> l >> r;
        l--; r--;
        d[l] += 1;
        d[r+1] -= 1;
    }
    f[0]= d[0];
    for(int i=1; i<200005; i++){
        f[i] = f[i-1] +d[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        int dem = 0;
        for(int i=l; i<=r; i++){
            if(f[i]>=k) dem++;
        }
        cout<<dem<<endl;
    }
}
