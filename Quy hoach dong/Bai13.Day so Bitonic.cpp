#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int f[n];
       f[0]=a[0];
       for(int i=0; i<n; i++){
           f[i]=a[i];
           for(int j=0; j<i; j++){
               if(a[i]>a[j]){
                   f[i] = max(f[i],f[j]+a[i]);    
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i]<a[j]){
                f[i] = max(f[i],f[j]+a[i]);
            }
        }
    }
    cout<<*max_element(f,f+n);
}
