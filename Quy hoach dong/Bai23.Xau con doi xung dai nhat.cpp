#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    s = "0" + s;
    bool f[n+1][n+1];
    memset(f,false,sizeof(f));
    for(int i=1; i<=n; i++) f[i][i] = true;
    for(int len = 2; len <= n; len++){
        for(int i=1; i<=n-len+1;i++){
            int j = i+len-1;
            if(len==2){
                f[i][j] = (s[i]==s[j]);
            }
            else if ((s[i]==s[j]) && (f[i+1][j-1])){
                f[i][j] = true;
            }
            if(f[i][j]){
                ans = max(ans,j-i+1);
            }
        }
    }
    cout<<ans;
    
}
