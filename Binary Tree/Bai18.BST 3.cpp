#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node (int u){
        data = u;
        left = right = NULL;
    }
};

node* insert(node *&root, int u){
    if(root == NULL){
        root = new node(u);
        return root;
    }
    if(u < root->data){
        root->left = insert(root->left,u);
    }
    else if(u > root->data){
        root->right = insert(root->right,u);
    }
    return root;
}

void postOrder(node *root){
    if(root==NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<' ';
}


int main(){
    int n; cin >> n;
    int a[n];
    node *root = NULL;
    for(int i=0; i<n; i++){
        cin >> a[i];
        insert(root,a[i]);
    }
    postOrder(root);
}
