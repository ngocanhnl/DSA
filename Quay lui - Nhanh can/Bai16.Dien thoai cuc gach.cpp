#include<bits/stdc++.h>
using namespace std;
string s;
int n;
vector<char> v[10];
char x[10];
void xuli(){
    int index = 2, cnt = 0;
    for(char c='a'; c<='z'; c++){
        cnt++;
        v[index].push_back(c);
        if(index==7 || index==9){
            if(v[index].size()==4) index++;
        }
        else{
            if(v[index].size()==3) index++;
        }
    }
}
void ql(int i,  string res){
    int num = s[i]-'0';
    for(char c:v[num]){
        x[i]=c;
        if(i==n){
            cout<<res+c<<" ";
        }
        else ql(i+1,res+c);
    }
}
int main(){
    cin >> s;
    sort(s.begin(),s.end());
    n = s.size();
    xuli();
    s = '0'+s;
    string tmp="";
    ql(1,tmp);
}
