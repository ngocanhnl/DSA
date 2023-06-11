#include<bits/stdc++.h>
using namespace std;
bool check(int a){
    if(a<2) return false;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    set<int> s;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        sort(a[i],a[i]+n);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    
}
