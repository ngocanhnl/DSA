#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    long long sum = 0, ans = 0, l = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        while(sum >= k){
            ans += n - i;
            sum -= a[l];
            l++;
        }
        
    }
    cout<<ans;
}
