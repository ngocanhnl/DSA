#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    return tong;
}
bool cmp(int a, int b){
    int x = sum(a);
    int y = sum(b);
    if(x!=y) return x<y;
    return a<b;
}
int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int max_dis = INT_MAX;
    for(auto it=v.begin()+1; it != v.end(); it++){
        int tmp = *(it)-*(it-1);
        max_dis = min(max_dis, tmp);
    }
    cout<<max_dis;
}
