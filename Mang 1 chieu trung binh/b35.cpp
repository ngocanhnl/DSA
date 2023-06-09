#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    multiset<int> s;
    int res = -1, l=0;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
       
        if(*(s.rbegin()) - *(s.begin()) <= k){
            int q = s.size();
            res = max(res, q);
        }
        else{
            int x = *(s.begin());
        
            s.erase(x);
            
        }
        
    }
    cout<<res;
}
