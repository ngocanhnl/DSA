#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> q;
    int n;
    cin >> n;
    while(n--){
        string x; cin >> x;
        if(x=="PUSHFRONT"){
            int s; cin >> s;
            q.push_front(s);
        }
        else if(x=="POPBACK"){
            if(!q.empty()) q.pop_back();
        }
        else if(x=="PRINTFRONT"){
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"NONE\n";
        }
        else if(x=="POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(x=="PUSHBACK"){
            int s; cin >> s; q.push_back(s);
        }
        else {
            if(!q.empty()) cout<<q.back()<<endl;
            else cout<<"NONE\n";
        }

    }
    
}
