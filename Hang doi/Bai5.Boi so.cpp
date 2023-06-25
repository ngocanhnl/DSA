#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<long long> q;
    int qe; cin >> qe;
    q.push(8);
    vector<long long> v;
    while(1){
        long long u = q.front(); q.pop();
        if(u<=1e18){
            q.push(u*10);
            q.push(u*10+8);
            v.push_back(u);
        } 
        else break;
        
    }
    while(qe--){
        int n; cin >> n;
        for(auto x : v){
            if(x%n==0){
                cout<<x<<endl;
                break;
            }
        }
    }

}
