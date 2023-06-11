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
    int dem =0;
    for(int i=0; i<n; i++){
        if(check(a[i][i])){
            if(s.count(a[i][i])==false) s.insert(a[i][i]);
        }
        if(check(a[i][n-i-1])) {
            if(s.count(a[i][n-i-1])==false) s.insert(a[i][n-i-1]);
        }
    }

    cout<<s.size();
}
