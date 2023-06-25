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
    if(root == NULL) return new node(u);
    if(u < root->data)root->left = insert(root->left,u);
    else if(u > root->data)root->right = insert(root->right,u);
    return root;
}
node* minNode(node *root){
    node *tmp = root;
    while(tmp && tmp->left != NULL){
        tmp = tmp->left;
    }
    return tmp;
}

node * delete1(node *root, int key){
    if(root==NULL) return root;
    if(key<root->data)root->left = delete1(root->left,key);
    else if(key>root->data)    root->right = delete1(root->right,key);    
    else{
        if(root->left==NULL && root->right==NULL) return NULL;
        else if(root->left==NULL){
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right==NULL){
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        node* k = minNode(root->right);
        root->data = k->data;
        root->right = delete1(root->right,k->data);
    }
    return root;
}
void inOrder(node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<' ';
    inOrder(root->right);
}
int main(){
    int n; cin >> n;
    int a[n];
    node *root = NULL;
    for(int i=0; i<n; i++){
        cin >> a[i];
        root = insert(root,a[i]);
    }
    int x; cin >> x;
    root = delete1(root,x);
    inOrder(root);
    
}
