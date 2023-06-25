#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    while(n--){
        int tmp; cin >> tmp;
        if(tmp == 1){
            cout<<q.size()<<endl;
        }
        else if(tmp==2){
            if(q.empty()) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(tmp==3){
            int s; cin >> s; q.push(s);
        }
        else if(tmp==4)
            {
                if(!q.empty()) q.pop();
            }
        else if(tmp==5){
            if(q.empty()) cout<<"-1\n";
            else cout<<q.front()<<endl;
        }
        else if (tmp==6){
            if(q.empty()) cout<<"-1\n";
            else cout<<q.back()<<endl;
        }

    }
    
}
