#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    stack<int> st;
    while(n--){
        string tmp;
        cin >> tmp;
        if(tmp=="show"){
            if(!st.empty()){
                vector<int> v;
                while(!st.empty()){
                    int a = st.top(); st.pop();
                    v.push_back(a);
                }
                for(int i = v.size()-1; i>=0; i--){
                    cout<<v[i]<<' ';
                    st.push(v[i]);
                }
            }
            else cout<<"EMPTY";
            cout<<endl;
        }
        else if(tmp=="push"){
            int a; cin >> a;
            st.push(a);
        }
        else{
            if(!st.empty()) st.pop();
        }
    }
    
    
}
