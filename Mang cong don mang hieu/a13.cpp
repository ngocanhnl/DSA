#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int h, t; cin >> h >> t;
    int s2=0, s8 = 0, max1 = 0, l = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='2') s2++;
        else s8++;
        while(s2 > h || s8 >t){
            if(s[l]=='2') s2--;
            else s8--;
            l++;
        }
        max1 = max(max1, s2 + s8);
    }
    cout<<max1;
    
}
