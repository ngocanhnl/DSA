#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<mp[0]; i++){
        cout<<"0 ";
    }
    for(int i=0; i<mp[1];i++) cout<<"1 ";
    for(int i=0; i<mp[2];i++) cout<<"2 ";
    
}
