#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    int a[n];
    for(int &x:a){
        cin >> x;
    }
    int d25=1, d50 = 0, d100 =0;
    if(a[0] != 25){
        cout<<"NO";return 0;
    }
    else{
        for(int i=1; i<n; i++){
            if(a[i]==25){
                d25++;
            }
            else if(a[i]==50){
                if(d25>0){
                    d50++;
                    d25--;
                }
                else{
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                if(d50>0&&d25>0){
                    d50--;
                    d25--;
                }
                else if(d50==0&&d25>2){
                    d25-=3;
                }
                else {
                    cout<<"NO";
                    return 0;
                }
            }
        
        }
        cout<<"YES";
    }
}
