#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long ans = 0, l = 0, res= 0, r= n-1;
    bool check = false;
    while(l<r){
        if(a[l] + a[r] == k){
            check = true;
            break;
        }
        else if(a[l] + a[r] > k){
            r--;
        }
        else{
            l++;
        }
    }
    if(check) cout<<"YES";
    else cout<<"NO";
        
    
    
}
