#include<bits/stdc++.h>
using namespace std;

int main(){
    long long sum=0;
    string s;
    cin >> s;
    for(char &x:s){
        if(isdigit(x)==false) x = ' ';
    }
    stringstream ss(s);
    string t;
    while(ss >> t){
        sum += stoll(t);
    }
    cout<<sum;
}
