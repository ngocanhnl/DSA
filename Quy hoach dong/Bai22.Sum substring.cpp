#include<bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    int tmp = n.size();
    long long f[tmp+1];
    f[0] = n[0] - '0';
    for(int i=1; i<tmp; i++){
        f[i] = 1ll*f[i-1]*10 + 1ll*(i+1)*(n[i]-'0');
    }
    long long sum = 0;
    for(int i=0; i<tmp; i++){
        sum += f[i];
    }
    cout<<sum;
}
