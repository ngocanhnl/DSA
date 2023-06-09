#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    map<long long,int> mp;
    long long sum =0;
    int max_dis=-1;
    for(int i=0; i<n; i++){    
        sum += a[i];
        sum = (sum%k+k)%k;
        if(sum%k==0){
            max_dis = max(max_dis, i+1);
        }
        if(mp.count(sum%k)){
            max_dis = max(max_dis, i - mp[sum%k]);
        }
        if(mp.count(sum%k)==0) mp[sum%k]=i;
    }
    cout<<max_dis;
    
}
