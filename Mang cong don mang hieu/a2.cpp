#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int i = 0, j=0;
    while( j<m && i<n ){
        if(b[j]>a[i]){
            i++;
        }
        else{
            cout<<i<<' ';
            j++;
        }
    }
    for(int k = j; k<m; k++){
        cout<<i<<" ";
    }
    
}
