#include<bits/stdc++.h>
using namespace std;
int a[100],x[100], n, s, res = INT_MAX;

void ql(int i, int pos, int sum){
    for(int j=pos; j<=n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                res = min(res,i);
            }
            else ql(i+1,j+1,sum+a[j]);
        }
        else return;
    }
}

int main(){
    cin >> n >> s;
    for(int i=1; i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    ql(1,1,0);
    if(res != INT_MAX) cout<<res;
    else cout<<"-1";
}
