#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    multiset<int> s;
    if(n==1&&k==1){
        cout<<a[0];
    }
    else{
        for(int i=0; i<k-1;i++){
            s.insert(a[i]);
        }
        for(int i=k-1; i<n; i++){
            s.insert(a[i]);
            cout<<*(s.begin())<<' '<<*(s.rbegin())<<endl;
            auto it = s.find(a[i-k+1]);
            s.erase(it);
    
        }
    }
}
