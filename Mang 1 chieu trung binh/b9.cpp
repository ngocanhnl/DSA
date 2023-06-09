#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >>n ;
    vector<int> v;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if(mp[tmp]==0){
            v.push_back(tmp);
            
        }
        mp[tmp]++;
    }
    for(auto it:mp){
        cout<<it.first<<' '<<it.second<<endl;
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<' '<<mp[it]<<endl;
    }
    
    
    
    
}
