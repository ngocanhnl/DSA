#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    long long a[n];
    for(long long &x:a) cin >> x;
    long long sum = 0, max_pos, maxpoint = 0, l=0;
    for(int i=0; i<k; i++){
        sum += a[i];
    }
    maxpoint = sum;
    max_pos = 0;
    for(int i=1; i<=n-k; i++){
        sum += (a[i+k-1] - a[i-1]);
        if(sum > maxpoint){
            maxpoint = sum;
            max_pos = i;
        }
    }
   
    cout<<maxpoint<<endl;
    for(int i=max_pos; i<max_pos+k; i++) cout<<a[i]<<' ';
    
}
