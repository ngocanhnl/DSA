#include<bits/stdc++.h>
using namespace std;
bool check(long long a){
    long long q=a;
    long long sum = 0;
    while(a){
        sum = sum * 10 + a%10;
        a/=10;
    }
    if(sum == q) return true;
    return false;
}
int main(){
    int n, m; cin >> n ;
    long long a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int dem =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(check(a[i][j])){
                
                dem++;
            }
        }
       
    }
    cout<<dem;
}
