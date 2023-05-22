#include<bits/stdc++.h>
using namespace std;
string s;
string tmp;
set<string> se;
void ql(int i){
    for(char x:{tolower(s[i]),toupper(s[i])}){
        tmp+=x;
        if(tmp.size()==s.size()){
            se.insert(tmp);
        }
        else ql(i+1);
        tmp.pop_back();
    }
}




int main(){
    cin >> s;
    ql(0);
    for(auto it:se){
        cout<<it<<endl;
    }
}
