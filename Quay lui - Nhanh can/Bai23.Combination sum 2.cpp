#include<bits/stdc++.h>
using namespace std;
int n, k, x[100], a[501];
bool check(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return n > 1;
}
void  ktao(){
    int idx=0;
    for(int i=0; i<=500; i++){
        if(check(i)){
            a[idx] = i;
            idx++;
        }
    }
}
bool ok = false;

void ql(int i, int bd, int sum){
    for(int j=bd; j<=500; j++){
        if(a[j]!=0&&sum+a[j]<=n){
            x[i] = a[j];
            if(sum + a[j] == n && i==k){
                ok = true;
                for(int k=1; k<=i; k++){
                    cout<<x[k];
                    if(k!=i) cout<<" + ";
                }
                cout<<endl;
            }
            else if(sum + a[j]<n && i<k){
                ql(i+1,j+1,sum+a[j]);
            }
        }
    }
}
int main(){
    cin >> n >> k;
    ktao();
    ql(1,0,0);
    if(ok==false) cout<<"NOT FOUND";
}
