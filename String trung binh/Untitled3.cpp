#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;


int main(){
    string s;
    set<string> se;
    vector<string> v;
    while(cin >> s){
        if(se.count(s)==0)
            v.push_back(s);    
        se.insert(s);
        mp[s]++;
    }
    for(auto it: se){
        cout<<it<<' '<<mp[it]<<endl;
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<' '<<mp[it]<<endl;
    }
}
