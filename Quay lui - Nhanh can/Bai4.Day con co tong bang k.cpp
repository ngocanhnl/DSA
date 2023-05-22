#include<bits/stdc++.h>
using namespace std;
bool used[100];
int a[100], n,s;
int rs[100];

void Try(int i, int sum, int pos){
    if(sum == s){
        cout<<"[";
        for(int j = 0; j<i; j++){
            cout<<rs[j];
            if(j!=i-1) cout<<' ';
        }
        cout<<"]";
        cout<<endl;
    }
    for(int j=pos; j<n; j++){
        if(sum+a[j] <= s){
             rs[i]=a[j];
            Try(i+1,sum+a[j],j+1);
        }
    }
}


int main(){
    cin >> n >> s;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    Try(0,0,0);
}
