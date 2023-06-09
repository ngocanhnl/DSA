#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >>k ;
    long long a[n];
    for(long long &x:a) cin >> x;
    int min_dis=INT_MAX;
    int tong = 0;
    map<int,int> mp;
    bool check = false;
    for(int i=0; i<n; i++){
        tong+=a[i];
        if(tong==k){
            min_dis = min(min_dis,i+1);
            check =true;
        }
        if(mp.count(tong-k)){
            min_dis = min(min_dis, i-mp[tong-k]);
            check =true;
        }
        mp[tong]=i;
    }
    if(check) cout<<min_dis;
    else cout<<"-1";
}
