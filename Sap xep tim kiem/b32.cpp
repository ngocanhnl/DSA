#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int l1=0,l2 =0, dem = 0;
    while(l1<n && l2 < m){
        if(a[l1]-b[l2]==1 || a[l1]-b[l2]==-1 || a[l1]-b[l2]==0){
            dem++;
            l1++;
            l2++;
        }
        else if(a[l1]-b[l2] > 1){
            l2++;
        }
        else l1++;
    }
    cout<<dem;
    
}
