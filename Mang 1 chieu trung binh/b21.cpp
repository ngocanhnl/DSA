#include<bits/stdc++.h>
using namespace std;

int main(){
    int tmp; 
    int l = 0, c = 0, cnt=0;
    while(cin >> tmp){
        cnt++;
        if(tmp % 2==0) c++;
        else l++;
    }
    if((cnt%2==0&&c>l)||(cnt%2==1&&l>c)) cout<<"YES";
    else cout<<"NO";
    
    
}
