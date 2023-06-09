#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    if( a % 2 == 0 && b%2==0) return a<b;
    if(a%2==0 && b%2!= 0 ) return false;
    if(a%2==1 && b%2==0) return true;
     return a>b;
}
int main(){
    int n; cin >>n;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    sort(a,a+n,cmp);
    for(int x:a){
        cout<<x<<' ';
    }
}
