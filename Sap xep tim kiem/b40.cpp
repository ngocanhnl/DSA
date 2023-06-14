#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
    mp[0] = 0;
    int dem = 1;
    for(int i=1; i<=n; i++){
        if(mp[i] <mp[i-1]){
        
            dem++;
        }
        
    }
    
    cout<<dem;
    
}
