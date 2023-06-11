#include<bits/stdc++.h>
using namespace std;
long long su(string s){
    long long sum = 0;
    for(int i=0; i<s.size();i++){
        int tmp;
        string t = "";
        t+=s[i];
        tmp = stoi(t);
        sum += tmp;
    }
    return sum;
}
int main(){
    
    string s;
    cin >> s;
    cout<<su(s);
    
}
