#include<bits/stdc++.h>
using namespace std;
int c[109], d1[109], d2[109], a[109], x[9][9];
int n, tong =0, ans=0;
void Try(int i){
    for(int j=1; j<=n; j++){
        if(c[j] && d1[i-j+n] &&d2[i+j-1]){
            a[i]=j;
            c[j] = d1[i-j+n] = d2[i+j-1] = 0;
            if(i==n){
                tong =0;
                for(int i=1; i<=n; i++){
                    tong += x[i][a[i]];
                }
                ans = max(ans,tong);
                
            }
            
            else Try(i+1);
            c[j] = d1[i-j+n] = d2[i+j-1] = 1;
    }
}
}



int main(){
    for(int i=0; i<=108; i++)     c[i] = d1[i] = d2[i] = 1;
    n=8;
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            cin >> x[i][j];
        }
    }
    Try(1);
    cout<<ans;
}
