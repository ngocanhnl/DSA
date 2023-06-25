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

void DFS(node *root){
    if(root==NULL) return;
    cout<<root->data<<' ';
    DFS(root->right);
    DFS(root->left);
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
    DFS(root);
}
