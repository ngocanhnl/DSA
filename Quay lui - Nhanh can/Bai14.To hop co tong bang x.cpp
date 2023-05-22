#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], n, s, ok = -1, used[100], dem=0;
vector<string> v;
void ql(int i, int bd, int sum){
    for(int j=bd; j<=n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j]==s){
                string tmp="";
                ok = 1;
                dem++;
                for(int k=1; k<=i; k++){
                    tmp += to_string(x[k]);
                    tmp+=" ";
                }
                tmp.pop_back();
                v.push_back(tmp);
            }
            else{
                ql(i+1,j,sum+a[j]);
            }
        }
    }
}

int main(){
    cin >> n >> s;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    ql(1,1,0);
    if(ok==1){
        cout<<dem<<endl;
        for(auto it:v){
            cout<<"{";
            cout<<it<<"}"<<endl;
        }
    }
    else cout<<-1;

}
