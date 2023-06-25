#include<bits/stdc++.h>
using namespace std;

int a[1000006], in[105], n;

struct node{
    int data;
    node *left;
    node *right;
    node (int u){
        data = u;
        left = right = NULL;
    }
};

node *insert(node *&root, int key){
    if(root==NULL) {
        root = new node(key);
        return root;
    }
    if(key < root->data){
        root->left = insert(root->left,key);
    }
    else if(key > root->data){
        root->right = insert(root->right,key);
    }
    return root;
}
void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<' ';
    inorder(root->right);
}
int main(){
    cin >> n;
    node *root = NULL;
    for(int i=0; i<n; i++){
         cin >>a[i];
         insert(root,a[i]);
    }
    inorder(root);
    
}
