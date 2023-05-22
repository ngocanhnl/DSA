#include<bits/stdc++.h>
using namespace std;
int x[100], n, k, s;
int dem=0, sum=0;
void Try(int i){
    for(int j=x[i-1]+1; j <= n-k+i; j++){
        x[i] = j;
        if(i==k){
            for(int i=1; i<=k; i++){
                sum+=x[i];
            }
            if(sum==s) dem++;
            sum = 0;
        
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin >> n >> k >> s;
    Try(1);
    cout<<dem;
}
