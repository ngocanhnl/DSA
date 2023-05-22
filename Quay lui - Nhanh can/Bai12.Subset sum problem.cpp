#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, ok = 0;

void ql(int i, int pos, int sum){
    for(int j=pos; j<=n; j++){
        if(sum + a[j] <= s/2){
        
            if(sum + a[j]== s/2){
                ok = 1;
            }
            else ql(i+1,j+1,sum + a[j]);
        }
    }
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        s += a[i];
    }
    sort(a+1,a+n+1);
    if(s%2==1) cout<<"0";
    else{
        ql(1,1,0);
        if(ok) cout<<"1";
        else cout<<"0";
    }

}
