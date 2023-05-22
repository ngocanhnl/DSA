#include<bits/stdc++.h>
using namespace std;
char a[100], x[100];
int n,k;
void ql(int i, int bd){
    for(int j=bd; j<=n; j++){
        x[i] = a[j];    
        if(i==k){
            for(int k=1; k<=i; k++){
                cout<<(char)x[k];
            }
            cout<<endl;
        }
        else ql(i+1,j);
    }
}

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    ql(1,1);
    
}
