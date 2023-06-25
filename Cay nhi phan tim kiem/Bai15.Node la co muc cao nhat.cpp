#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int u){
        data = u;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if(root==NULL) return;
    if(root->data==u){
        makeRoot(root,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

int lvmax(node *root){
    if(root==NULL) return -1;
    return max(lvmax(root->left)+1,lvmax(root->right)+1);
}

int dem(node *root, int k, int cnt){
    if(root==NULL) return 0;
    if(cnt==k){
        return 1;
    }
    int sum = 0;
    sum += dem(root->left,k,cnt+1);
    sum += dem(root->right,k,cnt+1);
    return sum;
}


int main(){
    int n; cin >> n;
    node*root=NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root==NULL){
            root = new node(a);
            makeRoot(root,b,c);
        }
        else
            insertNode(root,a,b,c);
    }
    int k = lvmax(root);
    cout<<dem(root,k,0);


}
