#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s+="a";
    string ans="", res ="";
    res += s[0];
    for(int i=1; i< s.size(); i++ ){
        if(s[i]==s[i-1]){
            res += s[i];
        }
        else{
            if(ans.size()<res.size()){
                ans = res;
                res = "";
            }
            else if( ans.size() == res.size()){
                ans = max(ans,res);
                res = "";
            }
            else res="";
            res += s[i]; 
        }
        
    }
    cout<<ans;
}
