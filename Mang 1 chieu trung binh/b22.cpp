#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if(mp[tmp]==1){
            cout<<tmp;
            return 0;
        }
        mp[tmp]++;
    }
    cout<<"-1";
    
}
