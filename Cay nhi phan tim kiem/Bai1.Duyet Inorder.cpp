#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};


void makeNode(node *root, int u, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}


void insertNode(node* root, int u, int v, char c){
    if(root == NULL) return;
    if(root->val==u){
        makeNode(root,u,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<' ';
    inorder(root->right);
}

int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root==NULL){
            root = new node(a);
            makeNode(root,a,b,c);
        }
        else{
            insertNode(root,a,b,c);
        }
    }
    inorder(root);
}
