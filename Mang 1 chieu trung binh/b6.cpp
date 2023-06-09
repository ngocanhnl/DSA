#include<bits/stdc++.h>
using namespace std;
int uoc(int a, int b){
    while(b){
        int tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}
int main(){
    int n; cin >>n;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    int dem =0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(uoc(a[i],a[j])==1) dem++;
        }
    }
    cout<<dem;
}
