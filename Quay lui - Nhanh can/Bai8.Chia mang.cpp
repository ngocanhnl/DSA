#include<bits/stdc++.h>
using namespace std;
int a[106], x[103], n, k, dem=0, sum1 =0;

void ql(int i, int bd, int sum){
    for(int j=bd; j<n; j++){
        if(sum+a[j] <= sum1/k){
            if(sum+a[j]==sum1/k){
                dem++;
            }
            else
                ql(i+1,j+1,sum+a[j]);
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum1 += a[i];
    }
    if(sum1%k!=0){
        cout<<"0";
    }
    else{
        ql(0,0,0);
        if(dem==k){
            cout<<"1";
        }
        else cout<<"0";
    }
}




