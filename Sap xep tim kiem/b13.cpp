#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    sort(a,a+n,greater<int>());
    int docung = a[0],dem = 1;
    for(int i=1; i<n; i++){
        if(docung==0) break;
        dem++;
        docung = min(docung-1, a[i]);
    }
    cout<<dem;
}
