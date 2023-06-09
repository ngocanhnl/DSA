#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    map<int,int> mp;
    vector<int> v;
    int tmp;
    while(cin>>tmp){
        if(check(tmp)){
            if(mp[tmp]==0){
                v.push_back(tmp);
            }
            mp[tmp]++;
        }
    }
    for(auto it:v){
        cout<<it<<' '<<mp[it]<<endl; 
    }
    
    
}
