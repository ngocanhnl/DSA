#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n], b[k];
    multiset<int> s;
    for(int i=0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int i=0; i<k; i++){
        cin >> b[i];
        auto it = s.upper_bound(b[i]);
        if(it != s.begin()){
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
        else cout<<"-1\n";
    }
    
    
    
}
