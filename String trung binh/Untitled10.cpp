#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string p = "python";
    int in = 0, dem = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==p[in]){
            dem++;
            in++;
        }
    }
    if(dem==6) cout<<"YES";
    else cout<<"NO";
}
