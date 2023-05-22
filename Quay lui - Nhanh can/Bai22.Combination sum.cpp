#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
bool ok = false;
void ql(int i, int bd, int sum){
    for(int j=bd; j<=9; j++){
        if(sum + j <= n){
            x[i]=j;
            if(sum + j==n && i==k){
                ok = true;
                for(int k=1; k<=i; k++){
                    cout<<x[k];
                    if(k!=i) cout<<" + ";
                }
                cout<<endl;
            }
            else ql(i+1,j+1,sum+j);
        }
    }
}
int main(){
    cin >> n >> k;
    ql(1,1,0);
    if(!ok){
        cout<<"NOT FOUND";
    }
}
