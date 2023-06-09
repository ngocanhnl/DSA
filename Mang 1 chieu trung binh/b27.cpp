#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , d; cin >> n >> d;
    int a[n];
       for(int &x:a){
           cin >> x;
    }
    long long dem = 0;
    for(int i=1; i<n; i++){
        if(a[i]<=a[i-1]){
            long long k = a[i-1] - a[i] +1;
            long long tmp =(k+d-1)/d*d;
            a[i] += tmp;
            dem += tmp/d; 
        }
    }
    cout<<dem;
    
    
}
