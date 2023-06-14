#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(pair<int,int> a, pair<int,int> b ){
    if(a.first != b.first ) return a.first < b.first;
    return a.second < b.second;
}
int main(){
    long long n; cin >> n;
    pair<int,int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i]. first >> a[i].second;
    }
    sort(a,a+n,cmp);
    long long endt =a[0].first + a[0].second, start;
    for(int i=1; i<n; i++){
        if(a[i].first >= endt){
            endt = a[i].first + a[i].second;
        }
        else{
            endt += a[i].second;
        }
    }
    cout<<endt;
    
}
