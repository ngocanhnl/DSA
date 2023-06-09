#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    multiset<int> s;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long l, r;
    
    for(int i=0; i<n; i++){
        l = i+1;
        r = n-1;
        while(l<r){
            if(a[l] + a[r] == k - a[i]){
                cout<<"YES";
                return 0;
            }
            else if( a[l] + a[r] > k -a[i]){
                r--;
            }
            else l++;
        }
    }
    cout<<"NO";
    
    
    
}
