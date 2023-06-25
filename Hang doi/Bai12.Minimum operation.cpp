#include<bits/stdc++.h>
using namespace std;

int bfs(int s, int t){
    queue<pair<int,int>> q;
    set<int> se;
    se.insert(s);
    q.push({s,0});
    while(!q.empty()){
        pair<int,int> x = q.front();
        q.pop();
        if(x.first==t) return x.second;
        if(x.first > 1 && se.count(x.first-1)==0){
            se.insert(x.first-1);
            q.push({x.first-1,x.second+1});
        }
        if(x.first < t && se.count(x.first*2)==0){
            se.insert(x.first*2);
            q.push({x.first*2,x.second+1});
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int s, k; cin >> s >> k;
        cout<<bfs(s,k)<<endl;
    }
}
