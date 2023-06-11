#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >>m;
    long long a[n][m];
    long long minn=1e9+7,maxx=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            if(a[i][j]<minn) minn=a[i][j];
            if(a[i][j]>maxx) maxx=a[i][j];
        }
    }
    cout << minn << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==minn){
                cout << i+1 <<" "<< j+1 << endl;
            }
        }
    }
    cout << maxx<< endl;
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            if(a[i][j]==maxx){
                cout << i+1 <<" "<< j+1 << endl;
            }
        }
    }
}
