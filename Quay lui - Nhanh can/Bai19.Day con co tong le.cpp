#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], n;
vector<vector<int>> v;
void ql(int i, int bd, int sum ){
    for(int j=bd; j<n; j++){
        x[i] = a[j];
        if((sum + a[j])%2==1){
            vector<int> tmp(x,x+i+1);
            v.push_back(tmp);
        }
        ql(i+1,j+1,sum+a[j]);
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    ql(0,0,0);
    sort(v.begin(), v.end());
    if(v.empty()==false){
    
    for(auto it:v){
        for(int x:it){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    }
    else cout<<"NOT FOUND";
}
