#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], n;
vector<string> v;
void ql(int i, int pos){
    for(int j=pos; j<=n; j++){
        if( a[j] > x[i-1]){
            x[i]=a[j];
            if(i>=2){
                string tmp="";
                for(int k=1; k<=i; k++){
                    tmp += to_string(x[k]);
                    tmp += " ";
                }
                v.push_back(tmp);
            }
            ql(i+1,j+1);
        }
    }
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    x[0]=0;
    ql(1,1);
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<endl;
    }


}
