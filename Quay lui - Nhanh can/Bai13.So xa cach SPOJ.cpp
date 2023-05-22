#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, ok = 0, used[100];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(used[j]==0 && abs(j-x[i-1])!=1){
            x[i]=j;
            used[j]=1;
            if(i==n){
                for(int k=1; k<=n; k++){
                    cout<<x[k];
                }
                cout<<endl;
            }
            else ql(i+1);
            used[j]=0;
        }
    }
}

int main(){
    cin >> n;
    x[0]=-1;
    ql(1);

}
