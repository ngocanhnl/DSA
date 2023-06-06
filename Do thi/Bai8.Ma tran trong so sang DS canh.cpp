#include<bits/stdc++.h>
using namespace std;
struct unit{
    int a, b, c;
};
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    vector<unit> v;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]!=0 && j>i){
                v.push_back({i,j,a[i][j]});
            }    
        }
    }
    for(auto it:v){
        cout<<it.a<<' '<<it.b<<' '<<it.c<<endl;
    }

    
}
