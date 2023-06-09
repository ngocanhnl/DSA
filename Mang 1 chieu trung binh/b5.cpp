#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    cout<<a[1]-a[0]<<' '<<a[n-1]-a[0]<<endl;
    for(int i=1; i<n-1; i++){    
        int min_dis = 0, max_dis=0;
        int d1 = a[i]-a[i-1], d2 = a[i+1]-a[i], d3 = a[n-1]-a[i], d4= a[i]-a[0];
        min_dis = min(d1,d2);
        max_dis = max(d3,d4);
        cout<<min_dis<<' '<<max_dis<<endl;
    }
    cout<<a[n-1]-a[n-2]<<' '<<a[n-1]-a[0];
}
