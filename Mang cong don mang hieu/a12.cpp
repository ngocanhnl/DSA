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
    long long ans = 0, l = 0, res= 0, r= n-1;
    bool check = false;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
        l = j + 1;
        r = n-1;
        while(l<r){
            if(a[l] + a[r] == k - a[i] - a[j]){
                cout<<"YES";
                return 0;
            }
            else if( a[l] + a[r] > k -a[i] - a[j]){
                r--;
            }
            else l++;
        }
    }
   
}
     cout<<"NO";
    
}
