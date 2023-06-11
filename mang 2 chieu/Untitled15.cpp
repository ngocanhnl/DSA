#include<bits/stdc++.h>
using namespace std;
long long f[84];
void fibo(){
    f[1]=0;
    f[2]=1;
    for(int i=3; i<84; i++){
        f[i] = f[i-1] +f[i-2];
    }
}
int main(){
    int n; cin >> n;
   
    long long a[n][n];
    fibo();
    int dem =1;
    int h1 = 0, h2 = n-1, c1 = 0, c2 =n-1;
    while(dem <=n*n){
        for(int i=c1; i<=c2; i++){
            a[h1][i] = f[dem];
            dem++;
        }
        h1++;
        for(int i=h1; i<=h2; i++){
            a[i][c2] = f[dem]; dem++;
        }
        c2--;
        for(int i=c2; i>=c1; i--){
            a[h2][i] = f[dem];
            dem++;
        }
        h2--;
        for(int i = h2; i>=h1; i--){
            a[i][c1] = f[dem];
            dem++;
        }
        c1++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
