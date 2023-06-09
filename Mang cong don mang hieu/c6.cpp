#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    map<char,int> mpt, mps;
    for(char x:t){
        mpt[x]++;
    }
    int k = mpt.size();
    int l = 0, cnt = 0, res = INT_MAX, pos=0;
    for(int r=0; r< s.size(); r++){
        mps[s[r]]++;
        if(mpt[s[r]] && mps[s[r]] == mpt[s[r]] ){
            cnt++;
        }
    
        if(cnt == k){
            while(1){
                if(mps[s[l]]-1 >= mpt[s[l]]){
                    mps[s[l]]--;
                    l++;
                }
                else{
                    break;
                }
            }
            if(r-l+1 < res){
                res = r - l + 1;
                pos = l;
            }
        }
    }
    for(int i=pos; i<pos+res; i++){
        cout<<s[i];
    }
}
