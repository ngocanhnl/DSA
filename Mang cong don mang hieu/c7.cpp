#include<bits/stdc++.h>
using namespace std;
int m = 1e9;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long sum = 0, l = 0, len=1e9, pos;
    for(int r=0; r<n; r++){
        sum += a[r];
        while(sum >= k){
            if(len > r-l+1){
                pos = l;
            }
            len = min(len, r-l+1);
            sum -=a[l];
            l++;
        }
    }
    if(len!=m)
        for(int i=pos; i<pos+len; i++) cout<<a[i]<<' ';
    else cout<<-1;
}
