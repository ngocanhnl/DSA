#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k){
    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid]==k){ 
            return true;
        }
        else if(a[mid] < k){
            l = mid + 1;
        }
        else r = mid-1;
    } 
    return false;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    if(check(a,n,k)) cout<<"YES";
    else cout<<"NO";
}
