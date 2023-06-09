#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    multiset<int> s;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long ans = 0, l = 0, res= 0;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
        while(*s.rbegin()-*s.begin() > k){
            auto it = s.find(a[l]);
            s.erase(it);
            l++;
        }
        ans += i - l +1;
    }
    cout<<ans;
        
    
    
}
