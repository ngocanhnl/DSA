#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {1000,500,200,100,50,20,10,5,2,1};
    
    long long n; cin >> n;
    long long tong = 0;
    for(int i=0; i<10; i++){
        tong += n / a[i];
        n %= a[i];
    }
    cout<<tong;
    
    
}
