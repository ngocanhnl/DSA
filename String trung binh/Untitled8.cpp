#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin >> q;
    cin.ignore(1);
    while(q--){
        vector<string> v;
        string s, t;
        getline(cin,s);
        
        for(char &x:s){
            x = tolower(x);
        }
        stringstream ss1(s);
        while(ss1 >> t){
            v.push_back(t);
        }
        int n = v.size();
        cout<<v[n-2];
        for(int i=0; i<n-2; i++){
            cout<<v[i][0];
        }
        cout<<"@xyz.edu.vn\n";
        
        string mk;
        stringstream ss(v[n-1]);
        while(getline(ss,mk,'/')){
            cout<<stoi(mk);
        }
        cout<<endl;
    } 
}
