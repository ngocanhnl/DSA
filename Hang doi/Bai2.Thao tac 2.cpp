#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    while(n--){
        string x; cin >> x;
        if(x=="PUSH"){
            int s; cin >> s;
            q.push(s);
        }
        else if(x=="POP"){
            if(!q.empty()) q.pop();
        }
        else{
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"NONE\n";
        }

    }
    
}
