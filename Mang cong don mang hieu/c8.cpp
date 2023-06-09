#include<bits/stdc++.h>
using namespace std;
int m = 1e9;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int q=-1;
    map<int,int> mp;
    for(int i=0; i<k; i++){
        mp[a[i]]++;
        if(mp[a[i]]==2){
            cout<<"YES";
            return 0;
        }
    }
    
    for(int i=1; i<n-k; i++){
        mp[a[i-1]]--;
        mp[a[i]]++;
        if(mp[a[i]]==2){
            cout<<"YES";
            return 0;
        }
        
    }
    cout<<"NO";

    
}
