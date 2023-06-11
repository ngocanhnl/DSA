#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    return a+b > b+a;
}

int main(){
    int n; cin >> n;
    vector<string> v;
    while(n--){
        string tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v) cout<<it;
}
