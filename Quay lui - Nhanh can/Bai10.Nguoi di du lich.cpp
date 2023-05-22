#include<bits/stdc++.h>
using namespace std;
int a[100][100],x[100], n, s, ans = INT_MAX, amin=INT_MAX;
int used[100], sum=0;
void ql(int i){
    for(int j=1; j<=n; j++){
        if(used[j]==0){
            x[i]=j;
            used[j]=1;
            sum += a[x[i-1]][x[i]];
            if(i==n){
                ans = min(ans,sum + a[x[n]][1]);
            }
            else if(sum + (n-i+1)*amin<ans){
                ql(i+1);
            }
            used[j]=0;
            sum -= a[x[i-1]][x[i]];
        }
    }
}
int main(){
    cin >> n ;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]) amin = min(amin,a[i][j]);
        }
    }
    x[1]=1;
    used[1]=1;
    ql(2);
    cout<<ans;
}
