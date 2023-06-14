#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    long long n; cin >> n ;
    long long a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    } 
    sort(b,b+n);
    for(int i=0; i<n; i++){
        auto it = upper_bound(b,b+n, a[i]);
        if(it != b+n){
            cout<<*it<<' ';
        }
        else cout<<"_ ";
    }
    
}
