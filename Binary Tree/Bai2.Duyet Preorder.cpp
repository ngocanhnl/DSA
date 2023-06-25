#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* right;
    node* left;
    node(int x){
        val = x;
        left = right = NULL;
    }
};


void makeRoot(node* root, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node* root, int u, int v, char c){
    if(root == NULL) return;
    if(root->val == u){
        makeRoot(root,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void preorder(node *root){
    if(root==NULL) return;
    cout<<root->val<<' ' ;
    preorder(root->left);
    preorder(root->right);
}


int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root == NULL){
            root = new node(a);
            makeRoot(root,b,c);
        }
        else{
            insertNode(root,a,b,c);
        }
    }
    preorder(root);
}
