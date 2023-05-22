#include<bits/stdc++.h>
using namespace std;
int a[100], c[100],c1[100],c2[100],n, x[100];

void ql(int i){
    for(int j=1; j<=n; j++){
        if(c[j]==0 && c1[i+j-1]==0 &&c2[i-j+n]==0){
            c[j]=1;
            c1[i+j-1]=1;
            c2[i-j+n]=1;
            x[i]=j;
            if(i==n){
                for(int k=1; k<=n; k++){
                    for(int h=1; h<=n; h++){
                        if(x[k]==h){
                            cout<<"Q";
                        }
                        else cout<<".";
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
            else{
                ql(i+1);
            }
            c[j]=0;
            c1[i+j-1]=0;
            c2[i-j+n]=0;
        }
    }
}

int main(){
    cin >> n;
    ql(1);
}
