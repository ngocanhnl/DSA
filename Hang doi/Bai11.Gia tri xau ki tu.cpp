#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        priority_queue<long long> q;
        int k; cin >> k;
        string s; cin >> s;
        long long d[256]={0};
        for(int i=0; i<s.size(); i++){
            d[s[i]]++;
        }
        for(int i=0; i<256; i++){
            if(d[i]) q.push(d[i]);
        }
        while(k!=0 && !q.empty()){
            long long u = q.top(); q.pop();
            if(u-1>0){
                q.push(u-1);
            }
            k--;
        }
        long long sum = 0;
        while(!q.empty()){
            long long u = q.top(); q.pop();
            sum += 1ll*u*u;
        }
        cout<<sum<<endl;
    }

}
