#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
       long long dem=0;
       for(int &x:a) cin >> x;
       
       for(int i=1;i<n; i++){
           if(a[i]<=a[i-1]){
           dem += abs(a[i]-a[i-1])+1;
               a[i] += abs(a[i]-a[i-1])+1;
                
        }
    }
    cout<<dem;
    
}
