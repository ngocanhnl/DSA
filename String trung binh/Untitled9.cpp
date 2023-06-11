#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    int q; cin >> q;
    cin.ignore(1);
    while(q--){
        vector<string> v;
        string s, t;
        getline(cin,s);
        string res = "";
        for(char &x:s){
            x = tolower(x);
        }
        stringstream ss1(s);
        while(ss1 >> t){
            v.push_back(t);
        }
        int n = v.size();
        res += v[n-2];
        for(int i=0; i<n-2; i++){
            res+=v[i][0];
        }
        mp[res]++;
        if(mp[res]>=2){
            res += to_string(mp[res]);
        }
        res += "@xyz.edu.vn";
        cout<<res<<endl;
        string mk;
        stringstream ss(v[n-1]);
        while(getline(ss,mk,'/')){
            cout<<stoi(mk);
        }
        cout<<endl;
    } 
}
