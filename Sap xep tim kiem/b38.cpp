#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n, cmp);
    int endt = a[0].second;
    int dem = 1;
    for(int i=1; i<n; i++){
        if(a[i].first >= endt){
            dem++;
            endt = a[i].second;
        }
    }
    cout<<dem;
    
}
